#ifndef CHARGER_H
#define CHARGER_H
#include "service.h"


class Charger: public Service{
public:
    Charger(std::string serviceID,std::string serviceType);
    Charger (const Charger &old_obj);
    //copy constructor

    bool setStatus(bool status);
    bool setPrice(double price);
    double getPrice(){return price;}
    bool getStatus(){return status;}
    bool charge();

private:
    double price= 10.5;
    double reservation_price= 4.5;
    bool status=1;
    //status 1 for available 0 for unavailable


};

#endif // CHARGER_H
