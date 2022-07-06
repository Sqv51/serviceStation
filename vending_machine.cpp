#include "vending_machine.h"
#include <iostream>

Vending_machine::Vending_machine(std::string serviceID, std::string serviceType)

{
    Vending_machine::serviceID = serviceID;
    Vending_machine::serviceType = serviceType;
}
std::string Vending_machine::buy(int order){
    if(order > vlist.size()){
        return "Invalid order";
            }
    else if(order<4 && order >=0){
       if(Vending_machine::vslot.at(order)>0){
       vslot.at(order)--;
       return vlist.at(order);
       }
       else{
            return ("Sorry we are out of " + vlist.at(order));
       }
    }
    else{
        if(cups>0){
            cups--;
            return vlist.at(order);
        }
         else{return "sorry we are out of cups";}


    }
}
