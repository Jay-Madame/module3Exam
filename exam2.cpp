#include <iostream>
#include "person.h"
#include "person.cpp" //my compiler for macos will not compile w/o
                      // the .cpp file but ik you shouoldn't have to add
#include <vector>
#include "movie.h"
#include "movie.cpp"

void testPerson();
void testMovie();

int main()
{
    testPerson();
    testMovie();
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