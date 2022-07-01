#ifndef CHARGER_H
#define CHARGER_H
#include "service.h"


class Charger: public Service{
public:
    Charger();
    bool setStatus();
    bool setPrice();

private:
    double price;
    std::string status;


};

#endif // CHARGER_H
