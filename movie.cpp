#include "movie.h"
#include "person.h" //again, my compiler will sadly not work w/o cpp file but ik its unnecessary on other os

Movie::Movie(std::string n, Person dir, std::vector<Person> cst, int rtm)
    : name(n), director(dir), cast(cst), runtimeMin(rtm)
{
}
bool Movie::isLongMovie(int min)
{
    if (min > 135)
    {
        return true;
    }
    return false;
}
std::ostream &operator<<(std::ostream &strm, const Movie &obj)
{
    strm << "Movie: " << obj.name << "\n"
         << "Director: " << obj.director.getFirstName() << " "
         << obj.director.getLastName() << "\n"
         << "Cast member(s): ";
    for (int i = 0; i < (obj.cast.size()); i++)
    {
        strm << obj.cast[i].getFirstName() << " "
             << obj.cast[i].getLastName() << "\n";
    }
    strm << "Runtime: " << obj.runtimeMin << " minutes\n";
    if (obj.isLongMovie(obj.runtimeMin))
    {
        strm << "This is a pretty long movie!\n";
    }
    else
    {
        strm << "This movie isn't too long.\n";
    }
    return strm;
}