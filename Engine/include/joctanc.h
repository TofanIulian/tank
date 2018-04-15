#ifndef JOCTANC_H
#define JOCTANC_H
#include <unit.h>
#include <engine.h>

class zid : public unit
{
private:
    static unsigned char nume;
protected:
    void action();
    void behaviour(int);
public:
    zid(int,int);
    void* gettip();
};


class bomba : public unit
{
private:
    static unsigned char nume;
    int dirx, diry;
protected:
    void action();
    void behaviour(int);
public:
    bomba(int, int, int, int);
    void* gettip();
};

class tanc : public unit
{
private:
    unsigned char nume;
    char stg, dr, sus, jos, foc;
    char pc;
protected:
    void action();
    void behaviour(int);
public:
    static char cc;
    tanc(char, char, char, char, char, char, int, int);
    void* gettip();
};

#endif // JOCTANC_H
