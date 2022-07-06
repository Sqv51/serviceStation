#ifndef VENDING_MACHINE_H
#define VENDING_MACHINE_H
#include "service.h"
//2 strcuks to be added

class Vending_machine: public Service
{
public:
    Vending_machine();
private:
    int cups;
    int Snancks;
};

#endif // VENDING_MACHINE_H
