#include "city.h"

City::City(std::string n, double lat, double lng) : name(n), latitude(lat), longitude(lng)
{
}
std::string City::getName() const
{
    return name;
}
double City::getLatitude() const
{
    return latitude;
}
double City::getLongitude() const
{
    return longitude;
}