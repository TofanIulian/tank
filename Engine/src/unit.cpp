#include "unit.h"
#include <cstddef>

engine unit::motor;

void unit::react()
{
    for (int i=0; i<nm; i++)
    {
        if (alive)
            behaviour(message[i]);
    }
    nm=0;
}

unit::unit(int a, int b)
{

    if (motor.nu < MAXNU-1 && motor.unittab[a][b] == NULL)
    {
        motor.nu++;
        motor.unittab[a][b] = this;
        motor.unitvect[motor.nu] = this;
        nm = 0;
        alive = 1;
        x = a;
        y = b;
    }

}

unit::~unit()
{

}

void unit::die()
{
    alive = 0;
}

void unit::move(int dx, int dy)
{
    /*
    if(motor.validxy(x+dx,y+dy)==1)
        if(motor.getunitxy(x+dx,y+dy)==NULL)
    */
    motor.unittab[x+dx][y+dy] =  motor.unittab[x][y];
    motor.unittab[x][y]=NULL;
    x+=dx;
    y+=dy;
}
void unit::sendmes(int pm, unit& pu)
{
    if(pu.nm < MAXNM)
    {
        pu.message[nm] = pm;
        pu.nm++;
    }
}

int unit::getx()
{
    return x;
}

int unit::gety()
{
    return y;
}

