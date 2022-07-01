#ifndef SERVICE_H
#define SERVICE_H
#include <string>

class Service
{
public:
    Service();
    std::string getID(){
        return serviceID;
    }
    std::string getType(){
        return serviceType;
    }
protected:
    std::string serviceID;
    std::string serviceType;



};


#endif // SERVICE_H
