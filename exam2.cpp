#include <iostream>
#include "person.h"
#include "person.cpp" //my compiler for macos will not compile w/o
                      // the .cpp file but ik you shouoldn't have to add
#include <vector>
#include "movie.h"
#include "movie.cpp"
#include "city.h"
#include "city.cpp"
#include "itinerary.h"
#include "itinerary.cpp"

void testPerson();
void testMovie();
void testCity();
void testItinerary();

int main()
{
    // testPerson();
    // testMovie();
    // testCity();
    testItinerary();
    return 0;
}

void testPerson()
{
    Person newPerson("Jane", "Doe", "1/9/2000");
    std::cout << newPerson.getFirstName();
    std::cout << " " << newPerson.getLastName();
    std::cout << " " << newPerson.getDateOfBirth();
    std::cout << std::endl
              << std::endl;
}

void testMovie()
{
    std::vector<Person> cast;
    Person fakePerson("John", "Doe", "1/10/1990");
    Person fakePerson2("Jane", "Doe", "1/10/1990");
    cast.push_back(fakePerson2);
    cast.push_back(fakePerson);
    Movie Jaws("Jaws", fakePerson, cast, 150);
    std::cout << Jaws << std::endl;

    cast.pop_back();
    cast.pop_back();

    Person person1("Micheal", "Fox", "1/10/1990");
    Person person2("Scarlett", "Johanson", "1/10/1990");
    Person director("Christopher", "Nolan", "1/10/1990");
    cast.push_back(person1);
    cast.push_back(person2);
    Movie Oppenheimer("Oppenheimer", director, cast, 240);
    std::cout << Oppenheimer << std::endl;
}

void testCity()
{
    City newCity("Fort Smith", 16.00, 43.00);
    std::cout << newCity.getName() << std::endl;
    std::cout << newCity.getLatitude() << std::endl;
    std::cout << newCity.getLongitude() << std::endl;
}

void testItinerary()
{
    City city1("Fort Smith", 35.39, 94.42);
    City city2("New York", 40.71, -74.01);
    City city3("Dallas", 32.78, -96.81);
    City city4("Chicago", 41.85, -87.65);
    Itinerary newItin;
    newItin.addCity(city1);
    newItin.addCity(city2);
    /*std::vector<City> cities = newItin.getCities();
    for (int i = 0; i < cities.size(); i++)
    {
        std::cout << cities[i] << std::endl;
    }
    */
    std::cout << newItin.getDistance() << std::endl;

    //cities.clear();
    Itinerary otherCities;
    otherCities.addCity(city3);
    newItin.addCity(city4);

    newItin = newItin + otherCities;
    /*cities = newItin.getCities();
    for (int i = 0; i < cities.size(); i++)
    {
        std::cout << cities[i] << std::endl;
    }
    */
    std::cout << newItin.getDistance(newItin.getCities()[2], newItin.getCities()[3]) << std::endl;
}