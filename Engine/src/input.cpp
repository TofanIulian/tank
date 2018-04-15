#include "input.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
#include "Engine.h"
#include "JocTanc.h"

void input::init()
{

}

void input::close()
{

}

char input::getc()
{
    if (_kbhit())
    {
        char c = _getch();
        if (c == 0)
            c = _getch();
        return c;
    }
    return 0;
}
