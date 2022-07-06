#ifndef STATION_H
#define STATION_H
#include "service.h"
#include <string>
#include <vector>
#include <iostream>

class Station
{
public:
    Station(std::string city,int cityCode,int stationID);
    bool addService(Service service);
    //adds a service to the services vector
    bool rmService(std::string seviceID);
    //removes a service from services vector
    std::vector<Service> getServices();
    //returns the services vector
    void displayServices();
    //displays services vector

private:
    std::string city;
    int cityCode;
    int stationID;
    std::vector<Service> services;



};

#endif // STATION_H
