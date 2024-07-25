#include "itinerary.h"
#include "city.h"
#include <cmath>

std::vector<City> Itinerary::getCities()
{
    return cities;
}
void Itinerary::addCity(City newCity)
{
    cities.push_back(newCity);
}
double Itinerary::getDistance(City origin, City dest)
{
    return (sqrt(pow(origin.getLatitude() - dest.getLatitude(), 2) + pow(origin.getLongitude() - dest.getLongitude(), 2)));
}
double Itinerary::getDistance()
{
    double totalDist = 0.0;
    for (int i = 0; i < (cities.size() - 1); i++)
    {
        totalDist += getDistance(cities[i], cities[i + 1]);
    }
    return totalDist;
}
Itinerary Itinerary::operator+(Itinerary &right)
{
    Itinerary tempItinerary;
    for (const auto &city : this->cities)
    {
        tempItinerary.cities.push_back(city);
    }
    for (const auto &city : right.cities)
    {
        tempItinerary.cities.push_back(city);
    }
    return tempItinerary;
}