#include "joctanc.h"
#include <unit.h>
#include <engine.h>
#include <cstddef>

//zid

unsigned char zid::nume = 177;

void zid::action()
{
}

void zid::behaviour(int a)
{
}

zid::zid(int a, int b):unit(a, b)
{
}

void* zid::gettip()
{
    return &nume;
}

//bomba

unsigned char bomba::nume = '.';

bomba::bomba(int x, int y, int dx, int dy):unit(x, y)
{
    dirx = dx;
    diry = dy;
}

void bomba::action()
{
    int xn, yn;
    xn = getx() + dirx;
    yn = gety() + diry;
    if (!motor.validxy(xn, yn))
        die();
    else if (motor.getunitxy(xn, yn) == NULL)
        move(dirx, diry);
    else
    {
        sendmes(999, *motor.getunitxy(xn,yn));
        die();
    }
}

void bomba::behaviour(int a)
{
    if(a == 999)
        die();
}


void* bomba::gettip()
{
    return &nume;
}

//Clasa tanc

char tanc::cc = 0;

tanc::tanc(char p1, char st, char d, char s, char j, char f, int x, int y ):unit(x, y)
{
    nume = p1;
    stg = st;
    dr = d;
    sus = s;
    jos = j;
    foc = f;
}

void* tanc::gettip()
{
    return &nume;
}

void tanc::action()
{
    if (cc == stg)
    {
        if (motor.validxy(getx(), gety()-1) && motor.getunitxy(getx(), gety()-1) == NULL)
        {
            move(0, -1);
            pc = cc;
        }
    }
    else if (cc == dr)
    {
        if (motor.validxy(getx(), gety()+1) && motor.getunitxy(getx(), gety()+1) == NULL)
        {
            move(0, 1);
            pc = cc;
        }
    }
    else if (cc == sus)
    {
        if (motor.validxy(getx()-1, gety()) && motor.getunitxy(getx()-1, gety()) == NULL)
        {
            move(-1, 0);
            pc = cc;
        }
    }
    else if (cc == jos)
    {
        if (motor.validxy(getx()+1, gety()) && motor.getunitxy(getx()+1, gety()) == NULL)
        {
            move(1, 0);
            pc = cc;
        }
    }
    else if (cc == foc)
    {
        if (pc == stg)
        {
            if (motor.validxy(getx(), gety()-1))
                if (motor.getunitxy(getx(), gety()-1) == NULL)
                    new bomba(getx(), gety()-1, 0, -1);
                else
                    sendmes(999, *motor.getunitxy(getx(), gety()-1));
        }
        else if (pc == dr)
        {
            if (motor.validxy(getx(), gety()+1))
                if (motor.getunitxy(getx(), gety()+1) == NULL)
                    new bomba(getx(), gety()+1, 0, 1);
                else
                    sendmes(999, *motor.getunitxy(getx(), gety()+1));
        }
        else if (pc == sus)
        {
            if (motor.validxy(getx()-1, gety()))
                if (motor.getunitxy(getx(), gety()-1) == NULL)
                    new bomba(getx()-1, gety(), -1, 0);
                else
                    sendmes(999, *motor.getunitxy(getx()-1, gety()));
        }
        else if (pc == jos)
        {
            if (motor.validxy(getx()+1, gety()))
                if(motor.getunitxy(getx()+1, gety()) == NULL)
                    new bomba(getx()+1, gety(), +1, 0);
                else
                    sendmes(999, *motor.getunitxy(getx()+1, gety()));
        }
    }
}

void tanc::behaviour(int a)
{
    if(a == 999)
    {
        die();
    }
}



