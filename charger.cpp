#include "charger.h"


Charger::Charger(std::string serviceID,std::string serviceType)
     {
    Charger::serviceType = serviceType;
    Charger::serviceID = serviceID;

}
bool Charger::setStatus(bool status){
//status 1 for available 0 for unavailable
    return 1;
}


bool Charger::setPrice(double price){
    Charger::price = price;
    return true;}

