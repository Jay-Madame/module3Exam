#include <iostream>
#include "person.h"
#include "person.cpp" //my compiler for macos will not compile w/o
                      // the .cpp file but ik you shouoldn't have to add

void testPerson();

int main()
{
    testPerson();
    return 0;
}

void testPerson()
{
    Person newPerson("Jane", "Doe", "1/9/2000");
    std::cout << newPerson.getFirstName();
    std::cout << " " << newPerson.getLastName();
    std::cout << " " << newPerson.getDateOfBirth();
}