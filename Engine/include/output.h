#ifndef OUTPUT_H
#define OUTPUT_H
#include <engine.h>
#include <unistd.h>

class output
{
private:
    engine& motor;
public:
    output(engine& pm) : motor(pm){};
    void init();
    void close();
    void afisare();
};

#endif // OUTPUT_H
