#include "sky.hpp"

using namespace std ;

Star::Star() {}

Star::Star(int x , int y , int brightness) 
{
    set_x(x) ;
    set_y(y) ;
    set_brightness(brightness) ;
}

void Star::set_x(int x) 
{
    if(x >= 0 && x <= 800) 
    {
        this -> x = x ;
    }
    else 
    {
        cout<< "this x is not logical \n" ;
    }
}

void Star::set_y(int y) 
{
    if(y >= 0 && y <= 600) 
    {
        this -> y = 600-y ;
    }
    else 
    {
        cout<< "this y is not logical \n" ;
    }
}

void Star::set_brightness(int brightness)
{
    this -> brightness = brightness ;
}

int Star::get_x() const
{
    return x ;
}

int Star::get_y() const
{
    return y ;
}

int Star::get_brightness() const
{
    return brightness ;
}
