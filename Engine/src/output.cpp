#include "output.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
static int pictvect[MAXNU][2], npict;

void curPos(int x, int y)           //inspirata de pe internet
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
    GetConsoleScreenBufferInfo(hStdout, &csbiInfo);
    csbiInfo.dwCursorPosition.X=y;
    csbiInfo.dwCursorPosition.Y=x;
    SetConsoleCursorPosition(hStdout, csbiInfo.dwCursorPosition);
}

void hidecursor()                  //inspirata de pe internet
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(consoleHandle, &info);
}

void showcursor()                   //inspirata de pe internet
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = TRUE;
    SetConsoleCursorInfo(consoleHandle, &info);
}

void clear_screen ( void )         //inspirata de pe internet
{
    DWORD n;                         /* Number of characters written */
    DWORD size;                      /* number of visible characters */
    COORD coord = {0};               /* Top left screen position */
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    /* Get a handle to the console */
    HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE );

    GetConsoleScreenBufferInfo ( h, &csbi );

    /* Find the number of characters to overwrite */
    size = csbi.dwSize.X * csbi.dwSize.Y;

    /* Overwrite the screen buffer with whitespace */
    FillConsoleOutputCharacter ( h, TEXT ( ' ' ), size, coord, &n );
    GetConsoleScreenBufferInfo ( h, &csbi );
    FillConsoleOutputAttribute ( h, csbi.wAttributes, size, coord, &n );

    /* Reset the cursor to the top left position */
    SetConsoleCursorPosition ( h, coord );
}

void output::init()
{
    hidecursor();
    system("cls");
    int i, j, n, m;
    n = motor.getnl();
    m = motor.getnc();
    for (i = 0; i <= n+1; i++)
    {
        for (j = 0; j <= m+1; j++)
        {
            if (i == 0 || j == 0 || i == n+1 || j == m+1)
                cout << (char)219;
            else cout << " ";
        }
        cout << endl;
    }
    for (i = 1; i <= motor.getnu(); i++)
        if (*(char*)motor.getunitpoz(i) -> gettip() == (char)177)
        {
            curPos(motor.getunitpoz(i) -> getx(), motor.getunitpoz(i) -> gety());
            cout << *(char*)motor.getunitpoz(i) -> gettip();
        }
    ::npict = 0;

}

void output::close()
{
    showcursor();
    system("cls");
}

void output::afisare()
{
    int NU;
    NU = motor.getnu();
    for (int i = 0; i < ::npict; i++)
    {
        curPos(::pictvect[i][0], ::pictvect[i][1]);
        cout << " ";
    }
    ::npict = 0;
    for (int i = 1; i <= NU; i++)
    {
        if (*(char*)motor.getunitpoz(i) -> gettip() != (char)177)
        {
            curPos(motor.getunitpoz(i) -> getx(), motor.getunitpoz(i) -> gety());
            cout << *(char*)motor.getunitpoz( i )->gettip();
            ::pictvect[::npict][0] = motor.getunitpoz(i) -> getx();
            ::pictvect[::npict][1] = motor.getunitpoz(i) -> gety();
            ::npict++;
        }
    }
}
