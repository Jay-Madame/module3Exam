#pragma once
#include <iostream>

class City
{
private:
    std::string name;
    double latitude, longitude;

public:
    City(std::string n, double lat, double lng);
    std::string getName() const;
    double getLatitude() const;
    double getLongitude() const;
};