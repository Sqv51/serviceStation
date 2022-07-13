#ifndef SECURITY_ALARM_H
#define SECURITY_ALARM_H
#include "security.h"

class Security_alarm: public Security
{
public:
    Security_alarm(std::string serviceID,std::string serviceType);
    void alarm(){
        std::string entered_passwd{};
        status=1;
        std::cout<< "ALARM ENTER PASSWORD: ";
        std::cin >> entered_passwd;
        if(entered_passwd == passwd){
            status = 0;
            std::cout<< "ALARM ENDED ";
        }
        else {
            std::cout<< "WRONG PASSWORD "<<std::endl;
        }
    }

private:
    bool status=0;
    std::string passwd="şifre";
    //alarm is off at 0
};

#endif // SECURITY_ALARM_H
