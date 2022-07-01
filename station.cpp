#include "station.h"
#include "service.h"
#include <iostream>



Station::Station(std::string city,int cityCode,int stationID)
    :city{city}, cityCode{cityCode}, stationID{stationID}
{
    std::cout << "İstasyon "<< cityCode<< " "<<stationID << " oluşturuldu"<< std::endl  ;
}

bool Station::addService(){return true;}

bool Station::rmService(){return true;}

void Station::displayServices(){}

std::vector<Service> Station::getServices(){return std::vector<Service>{}; }



