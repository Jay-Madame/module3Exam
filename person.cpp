#include "person.h"

Person::Person(std::string fn, std::string ln, std::string dob) : firstName(fn), lastName(ln), dateOfBirth(dob)
{
}
std::string Person::getFirstName()
{ 
    return firstName;
}
std::string Person::getLastName()
{
    return lastName;
}
std::string Person::getDateOfBirth()
{
    return dateOfBirth;
}