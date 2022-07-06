#ifndef SECURITY_ALARM_H
#define SECURITY_ALARM_H
#include "security.h"

class Security_alarm: public Security
{
public:
    Security_alarm();

private:
    bool status=0;
    std::string passwd="şifre";
    //alarm is off at 0
};

#endif // SECURITY_ALARM_H
