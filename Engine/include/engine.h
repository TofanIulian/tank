#ifndef ENGINE_H
#define ENGINE_H
#include <unit.h>
#define MAXNC 100
#define MAXNL 100
#define MAXNU 10000

class unit;

class engine
{
private:
    unit* unittab[MAXNC][MAXNL];             //tabla de joc
    unit* unitvect[MAXNU];                   //lista unitatilor de pe tabla
    int nc,nl,nu;                            //nr. coloanelor, liniilor, unitatilor
public:
    friend class unit;
    void init(int,int);
    int getnl();
    int getnc();
    int getnu();
    int validxy(int, int);
    int validpoz(int);
    unit* getunitxy(int, int);
    unit* getunitpoz(int);
    void next();
};

#endif // ENGINE_H
