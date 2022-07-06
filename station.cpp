#include "station.h"
#include "service.h"
#include <iostream>



Station::Station(std::string city,int cityCode,int stationID)
    :city{city}, cityCode{cityCode}, stationID{stationID}
{
    std::cout << "İstasyon "<< cityCode<< " "<<stationID << " oluşturuldu"<< std::endl  ;
}

bool Station::addService(Service service){
    services.push_back(service);

    return true;
    }

bool Station::rmService(){
    return true;
}

void Station::displayServices(){
    for(auto i : services){
        std::cout<< "ID: "<<i.getID() <<" Type: "<< i.getType() << std::endl;
    }
}

std::vector<Service> Station::getServices(){return std::vector<Service>{}; }



