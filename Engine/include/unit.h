#ifndef UNIT_H
#define UNIT_H
#define MAXNM 100
#include <engine.h>
class engine;

class unit
{
private:
    int alive;
    int x,y,poz;
    int message[MAXNM];
    int nm;
    void react();
protected:
    unit(int,int);
    virtual ~unit();
    void die();
    void move(int,int );
    void sendmes(int,unit& );
    virtual void action() = 0;
    virtual void behaviour(int) = 0;
public:
    friend class engine;
    static engine motor;
    int getx();
    int gety();
    virtual void* gettip() = 0;
};

#endif // UNIT_H
