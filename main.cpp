#include <QCoreApplication>
#include "client.h"
#include "station.h"
#include "charger.h"
#include <iostream>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Client yigit("ab123",250.00,"Yiğit");
    std::cout << yigit.getbalance() <<yigit.getID()<<yigit.getName()<< std::endl;
    Station kut("Istanbul",34,413);
    Charger charger1("CGR1","Charger");
    Charger charger2("CGR2","Charger");
    kut.addService(charger1);
    kut.addService(charger2);
    kut.displayServices();
    std::cout <<charger1.getPrice()<< " "<< charger1.getStatus()<< std::endl;



    return a.exec();
}
