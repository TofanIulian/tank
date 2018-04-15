#include "engine.h"
#include <cstddef>

void engine::init(int a, int b)
{
    nc = b;
    nl = a;
    for (int i = 1; i <= nl; i++)
        for (int j = 1; j <= nc; j++)
            unittab[i][j] = NULL;
    nu = 0;
}

int engine::getnl()
{
    return nl;
}

int engine::getnc()
{
    return nc;
}

int engine::getnu()
{
    return nu;
}

int engine::validxy(int a, int b)
{
    if(a>0 && a<= nl && b>0 && b<=nc)
        return 1;
    return 0;
}

int engine::validpoz(int a)
{
    if(a>=1 && a<=nu)
        return 1;
    return 0;
}

unit* engine::getunitxy(int a, int b)
{
    return unittab[a][b];
}

unit* engine::getunitpoz(int a)
{
    return unitvect[a];
}

void engine::next()
{
    int i;
    for (i=1; i<=nu; i++)
        unitvect[i]->action();
    for (i=1; i<=nu; i++)
        unitvect[i]->react();
    for (i=1; i<=nu; i++)
        if (!unitvect[i] -> alive)
        {
            unittab[unitvect[i] -> x][unitvect[i] -> y] = NULL;
            delete unitvect[i];
            unitvect[i] = unitvect[nu];
            i--;
            nu--;
        }

}


