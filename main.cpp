#include <QCoreApplication>
#include "client.h"
#include <iostream>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Client yigit("ab123",250.00,"Yiğit");
    std::cout << yigit.getbalance() <<yigit.getID()<<yigit.getName()<< std::endl;

    return a.exec();
}
