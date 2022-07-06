#include <QCoreApplication>
#include "client.h"
#include "station.h"
#include "charger.h"
#include "vending_machine.h"
#include <iostream>

using namespace std;

void action_buy(string ID,string Type,int Amount );
void action_buy(string ID,string Type,int Double );
void action_trigger_alarm();

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Client yigit("ab123",250.00,"Yiğit");
    cout << yigit.getbalance() <<yigit.getID()<<yigit.getName()<< endl;
    Station kut("Istanbul",34,413);
    Charger charger1("CGR1","Charger");
    Charger charger2("CGR2","Charger");
    kut.addService(charger1);
    kut.addService(charger2);
    kut.displayServices();
    cout <<charger1.getPrice()<< " "<< charger1.getStatus()<< endl;
    Vending_machine vending1("VDR1","Vending");

    for(int i = 0; i<101;i++){
        vending1.buy(5);
    }
    for(int i = 0; i<21;i++){
        vending1.buy(0);
    }
    vending1.display_products();
    kut.displayServices();






    return a.exec();
}
