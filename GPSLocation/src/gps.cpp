#include "gps.hpp"

using namespace std ;

Gps::Gps(int latitude , int longitude) 
{
    set_new_location(latitude , longitude) ;
}

Gps::~Gps() 
{

    cout<< "last latitude :" << latitude << '\n' ;
    cout<< "last longitude :" << longitude << "\n\n" ;
}

void Gps::set_new_location(int latitude , int longitude) 
{

    if(latitude < -90 || latitude > 90) 
    {
        throw invalid_argument("this latitude is not logical") ;
    }

    if(longitude < -180 || longitude > 180) 
    {
        throw invalid_argument("this longitude is not logical") ;
    }

    this -> latitude = latitude ;
    this -> longitude = longitude ;
}

void Gps::show_location() const 
{

    cout<< "now latitude :" << this -> latitude << '\n' ;
    cout<< "now longitude :" << this -> longitude << '\n' ;
}