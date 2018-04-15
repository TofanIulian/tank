#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <joctanc.h>
#include <input.h>
#include <output.h>
#include <unistd.h>

using namespace std;

input intrare;
output iesire(tanc::motor);

void map1()
{
    int i, j;
    for (j= 11; j <= 50; j++)
    {
        new zid(2, j);
        new zid(19, j);
    }
    for (j = 1; j <= 4; j ++)
    {
        new zid(8, j);
        new zid(13, j);
    }
    for (j = 57; j <= 60; j ++)
    {
        new zid(8, j);
        new zid(13, j);
    }
    for (j = 9; j <= 10; j++)
    {
        new zid(5, j);
        new zid(16, j);
    }
    for (j = 51; j <= 52; j++)
    {
        new zid(5, j);
        new zid(16, j);
    }
    for (i = 5; i <= 8; i++)
    {
        for (j = 11; j <= 28; j++)
            new zid(i, j);
        for (j = 33; j <= 50; j++)
            new zid(i, j);
    }
    for (i = 13; i <= 16; i++)
    {
        for (j = 11; j <= 28; j++)
            new zid(i, j);
        for (j = 33; j <= 50; j++)
            new zid(i, j);
    }
}

void map2()
{
    new zid(20, 29);
    new zid(19, 29);
    new zid(18, 29);
    new zid(18, 30);
    new zid(18, 31);
    new zid(18, 32);
    new zid(20, 32);
    new zid(1, 4);
    new zid(2, 4);
    new zid(3, 4);
    new zid(4, 4);
    new zid(4, 3);
    new zid(4, 1);
    new zid(1, 30);
    new zid(2, 30);
    new zid(3, 30);
    new zid(4, 30);
    new zid(5, 30);
    new zid(6, 30);
    new zid(6, 29);
    new zid(6, 28);
    new zid(6, 27);
    new zid(6, 26);
    new zid(6, 25);
    new zid(6, 24);
    new zid(6, 23);
    new zid(6, 22);
    new zid(7, 22);
    new zid(8, 22);
    new zid(9, 22);
    new zid(10, 22);
    new zid(11, 22);
    new zid(1, 60);
    new zid(2, 60);
    new zid(3, 60);
    new zid(4, 60);
    new zid(5, 60);
    new zid(6, 60);
    new zid(7, 60);
    new zid(7, 59);
    new zid(7, 58);
    new zid(7, 57);
    new zid(7, 56);
    new zid(7, 55);
    new zid(7, 54);
    new zid(7, 53);
    new zid(7, 52);
    new zid(7, 51);
    new zid(7, 50);
    new zid(20, 60);
    new zid(19, 60);
    new zid(18, 60);
    new zid(17, 60);
    new zid(16, 60);
    new zid(15, 60);
    new zid(15, 59);
    new zid(15, 58);
    new zid(15, 57);
    new zid(15, 56);
    new zid(15, 55);
    new zid(15, 54);
    new zid(15, 53);
    new zid(15, 52);
    new zid(15, 51);
    new zid(15, 50);
    new zid(20, 43);
    new zid(19, 43);
    new zid(18, 43);
    new zid(17, 43);
    new zid(16, 43);
    new zid(15, 43);
    new zid(14, 43);
    new zid(13, 43);
    new zid(13, 44);
    new zid(13, 45);
    new zid(13, 46);
    new zid(13, 47);
    new zid(13, 48);
    new zid(1, 43);
    new zid(2, 43);
    new zid(3, 43);
    new zid(4, 43);
    new zid(5, 43);
    new zid(6, 43);
    new zid(7, 43);
    new zid(8, 43);
    new zid(1, 42);
    new zid(2, 42);
    new zid(3, 42);
    new zid(4, 42);
    new zid(5, 42);
    new zid(6, 42);
    new zid(7, 42);
    new zid(8, 42);
    new zid(8, 42);
    new zid(8, 41);
    new zid(8, 40);
    new zid(8, 39);
    new zid(8, 38);
    new zid(8, 37);
    new zid(8, 36);
    new zid(8, 35);
    new zid(9, 35);
    new zid(10, 35);
    new zid(11, 35);
    new zid(12, 35);
    new zid(8, 34);
    new zid(9, 34);
    new zid(10, 34);
    new zid(11, 34);
    new zid(12, 34);
    new zid(8, 33);
    new zid(9, 33);
    new zid(10, 33);
    new zid(11, 33);
    new zid(12, 33);
    new zid(13, 59);
    new zid(13, 58);
    new zid(13, 57);
    new zid(13, 56);
    new zid(12, 56);
    new zid(11, 56);
    new zid(10, 56);
    new zid(10, 57);
    new zid(10, 58);
    new zid(10, 59);
    new zid(11, 59);
    new zid(12, 59);
    new zid(13, 59);
    new zid(10, 54);
    new zid(11, 54);
    new zid(12, 54);
    new zid(13, 54);
    new zid(10, 53);
    new zid(11, 53);
    new zid(11, 52);
    for (int i = 1; i <= 6; i++)
        for (int j = 33; j <= 41; j++)
            if (i%2 == 0 || j%2 == 0)
                new zid(i, j);
    for (int i = 8; i <= 14; i++)
        for (int j = 1; j <= 12; j++)
            if (i%2 == 0 || j%2 == 0 )
                new zid(i, j);
    for (int i = 17; i <= 20; i++)
        for (int j = 49; j <= 57; j++)
            if (i%2 == 0 || j%2 == 0)
                new zid(i, j);
    for (int i = 1; i <= 7; i++)
        for (int j = 50; j <= 59; j++)
            if (i%2 == 0 || j%2 == 0)
                new zid(i, j);
    for (int i = 16; i <= 20; i++)
        for (int j = 1; j <= 9; j++)
            {
                new zid(i, j);
                if (j%2 == 1)
                    new zid(j*2, i);
            }
}

void TancCit()
{
    char nume, stanga, dreapta, sus, jos, foc;
    int config, map, locX, locY;
    cout << " Apasati tasta 0 pentru configuratie standard a tancurilor sau 1 daca doriti sa le configurati dumneavoastra: ";
    cin >> config;
    if(config == 0)
    {
        cout << " Configuratie standard: \n Player 1: W,A,S,D si F pentru foc\n Player 2: I,J,K,L si P pentru foc";
        new tanc('Q', 'a', 'd', 'w', 's', 'f', 1, 1);
        new tanc('R', 'j', 'l', 'i', 'k', 'p', 20, 31);
    }
    else
    {
        cout << "Ce litera e tancul dumneavoastra( Player 1 )? Introduceti una: ";
        cin >> nume;
        cout << "\n Butonul pentru stanga: ";
        cin >> stanga;
        cout << "\n Butonul pentru dreapta: ";
        cin >> dreapta;
        cout << "\n Butonul pentru sus: ";
        cin >> sus;
        cout << "\n Butonul pentru jos: ";
        cin >> jos;
        cout << "\n Butonul pentru foc: ";
        cin >> foc;
        locX = 1; locY = 1;
        new tanc(nume, stanga, dreapta, sus, jos, foc, locX, locY);
        cout << "Ce litera e tancul dumneavoastra( Player 2 )? Introduceti una: ";
        cin >> nume;
        cout << "\n Butonul pentru stanga: ";
        cin >> stanga;
        cout << "\n Butonul pentru dreapta: ";
        cin >> dreapta;
        cout << "\n Butonul pentru sus: ";
        cin >> sus;
        cout << "\n Butonul pentru jos: ";
        cin >> jos;
        cout << "\n Butonul pentru foc: ";
        cin >> foc;
        locX = 20; locY = 31;
        new tanc(nume, stanga, dreapta, sus, jos, foc, locX, locY);

    }
    cout << "\n\n 1 pentru map1 sau 2 pentru map2: ";
    cin >> map;
    if (map == 1)
        map1();
    else
        map2();
}

int main()
{
    tanc::motor.init(20,60);
    TancCit();
    intrare.init();
    iesire.init();
    iesire.afisare();
    do{
        tanc::cc=intrare.getc();
        tanc::motor.next();
        iesire.afisare();
        Sleep(25);
    }while (tanc::cc != 27);
    intrare.close();
    iesire.close();
    return 0;
}
