#ifndef SERVICE_H
#define SERVICE_H
#include <string>
#include<iostream>

class Service
{
public:
    Service();
    Service(std::string serviceID,std::string serviceType);
    std::string getID(){
        return serviceID;
    }
    std::string getType(){
        return serviceType;
    }
    friend bool operator== (Service &lhs, Service &rhs){

        if(lhs.serviceID == rhs.serviceID)
            return true;
        else
            return false;
    }
protected:
    std::string serviceID;
    std::string serviceType;



};


#endif // SERVICE_H
