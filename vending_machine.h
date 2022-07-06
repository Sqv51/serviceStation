#ifndef VENDING_MACHINE_H
#define VENDING_MACHINE_H
#include "service.h"
#include <vector>


class Vending_machine: public Service
{
public:
    Vending_machine(std::string serviceID,std::string serviceType);
    std::string buy(int);



private:
    int cups=100;
    std::vector<int>vslot{20,20,20,20};
    std::vector<std::string>vlist{"[1]Çikolata","[2]Gazoz","[3]Bisküvi","[4]Popkek","[5]Espresso","[6]Latte"};

};

#endif // VENDING_MACHINE_H
