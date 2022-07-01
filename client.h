#ifndef CLIENT_H
#define CLIENT_H
#include <string>


class Client
{
public:
    Client(std::string clientID, long double balance, std::string clientName);
    std::string getID(){return clientID;}
    std::string getName(){return clientName;}
    long double getbalance(){return balance;}
private:
    std::string clientID;
    long double balance;
    std::string clientName;
};

#endif // CLIENT_H
