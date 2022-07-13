#include <QCoreApplication>
#include "client.h"
#include "security_alarm.h"
#include "station.h"
#include "charger.h"
#include "vending_machine.h"
#include <iostream>

using namespace std;


void action_buy(Client client, Vending_machine &vdr, int order );
void action_trigger_alarm(Security_alarm alarm);
void action_chargecar(Client client, Charger &charger, double chargetime);
void action_reserve_charger(Client client,Charger &charger,double waittime);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Station ist("Istanbul",34,413);
    Client yigit("ab123",250.50,"Yiğit");
    Client jason("ab321",1000,"Jason");
    Charger charger1("CGR1","Charger");
    Charger charger2("CGR2","Charger");
    Vending_machine vending1("VDR1","Vending");
    Security_alarm alarm1("ALR1","Security Alarm");
    //constructed objects on the stack
    action_chargecar(yigit,charger1,100000);
    action_reserve_charger(jason,charger2,50000);
    action_chargecar(yigit,charger1,10);
    action_reserve_charger(jason,charger2,50);
    action_buy(yigit,vending1,5);
    //test functions


    return a.exec();
}

//implemented functions for testing purposes
void action_buy(Client client,Vending_machine &vdr,int order ){
    if(vdr.getprice() <= client.getbalance()){
        client.spend(vdr.getprice());
        vdr.buy(order);
    }
    else{
        cout<< "INSUFFCENT BALANCE"<<endl;
    }


}
void action_trigger_alarm(Security_alarm alarm){
    alarm.alarm();
                                               }
void action_chargecar(Client client,Charger &charger,double chargetime){
    if(charger.getStatus()==1){

        double cost = chargetime *charger.getPrice();
        if (cost<= client.getbalance()){
            charger.setStatus(0);
            client.spend(cost);
            cout<< "Charged for "<<chargetime<<" minutes"<<endl;
            cout<< "Cost: "<<cost<< " Current Balance "<< client.getbalance() <<endl;
            charger.setStatus(1);//status set available after charge is done
            }
        else{
            cout << "INSUFFICENT BALANCE"<<endl;}
        }
    else{
        cout << "THİS CHARGER IS RESERVED"<<endl;
    }
}
void action_reserve_charger(Client client,Charger &charger,double waittime){
    if(charger.getStatus()==1){
        double cost = waittime *charger.getPrice();
        if(cost<=client.getbalance()){
            client.spend(cost);
            charger.setStatus(0);
            cout<< "Reserved for "<<waittime<<" minutes"<<endl;
            cout<< "Cost: "<<cost<< " Current Balance "<< client.getbalance() <<endl;
            //reserved for x time
            charger.setStatus(1);
            }
        else{
            cout << "INSUFFICENT BALANCE"<<endl;}

        }

    else{
        cout << "THİS CHARGER IS ALREADY RESERVED"<<endl;
    }

}
