#ifndef COFFEE_MACHINE_H
#define COFFEE_MACHINE_H
#include "vendor.h"

class Coffee_machine: public Vendor
{
public:
    Coffee_machine();
private:
    int cups;
    //std::vector<Drink> drinks;

};


#endif // COFFEE_MACHINE_H
