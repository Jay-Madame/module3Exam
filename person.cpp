#include "person.h"

Person::Person(std::string fn, std::string ln, std::string dob) : firstName(fn), lastName(ln), dateOfBirth(dob)
{
}
std::string Person::getFirstName() const
{
    return firstName;
}
std::string Person::getLastName() const
{
    return lastName;
}
std::string Person::getDateOfBirth() const
{
    return dateOfBirth;
}