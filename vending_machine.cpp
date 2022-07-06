#include "vending_machine.h"
#include <iostream>

Vending_machine::Vending_machine(std::string serviceID, std::string serviceType)

{
    Vending_machine::serviceID = serviceID;
    Vending_machine::serviceType = serviceType;
}
void Vending_machine::buy(int order){
    if(order > vlist.size()){
        std::cout<< "Invalid order"<<std::endl;
            }
    else if(order<4 && order >=0){
       if(Vending_machine::vslot.at(order)>0){
       vslot.at(order)--;
       std::cout<< vlist.at(order)<<std::endl;
       }
       else{
            std::cout<< ("Sorry we are out of " + vlist.at(order))<<std::endl;
       }
    }
    else{
        if(cups>0){
            cups--;
            std::cout<< vlist.at(order)<<std::endl;
        }
         else{std::cout << "sorry we are out of cups"<<std::endl;}


    }
}
void Vending_machine::display_products(){

    std::cout<<"===============WE OFFER================="<<std::endl;
    for(const auto &i : vlist){
        std::cout<< i<< std::endl;
    }
    std::cout<<"================================"<<std::endl;
    }
