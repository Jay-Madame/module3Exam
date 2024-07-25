#pragma once
#include "city.h"

#include <iostream>
#include <vector>
#include <cmath>

class Itinerary
{
private:
    std::vector<City> cities;

public:
    std::vector<City> getCities();
    void addCity(City newCity);
    static double getDistance(City origin, City dest);
    double getDistance();
    Itinerary operator+(Itinerary &right);
};