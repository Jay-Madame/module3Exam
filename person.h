#pragma once
#include <iostream>

class Person
{
private:
    std::string firstName, lastName, dateOfBirth;

public:
    Person(std::string fn, std::string ln, std::string dob);
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getDateOfBirth() const;
};