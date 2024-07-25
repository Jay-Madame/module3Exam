#pragma once
#include <vector>
#include <iostream>
#include "person.h"

class Movie
{
private:
    std::string name;
    Person director;
    std::vector<Person> cast;
    int runtimeMin;

public:
    Movie(std::string n, Person dir, std::vector<Person> cst, int rtm);
    static bool isLongMovie(int min);
    friend std::ostream &operator<<(std::ostream &strm, const Movie &obj);
};