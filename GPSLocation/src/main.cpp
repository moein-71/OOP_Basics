#include "gps.hpp"

using namespace std ;

// this is some information about this mini project :
// in this mini project we are do some work like set and show the location 
// when you start this program , program ask your first location and validate it 
// you have 2 order set , show .
// you can set location by set and you can see your location by show
// and when you type exit the program closed and the destructor print the last location  

int main() {

    int latitude ;
    int longitude ;

    cout<< "enter your first latitude : \n" ;
    cin>> latitude ;

    cout<< "enter your first longitude : \n" ;
    cin>> longitude ;

    cout<< '\n' ;

    
    Gps location(latitude , longitude) ;

    while(1) 
    {

        string order ;

        cout<< "enter your order \n" ;
        cin>> order ;

        if(order == "set") 
        {
            int latitude ;
            int longitude ;

            cout<< "enter your new latitude : \n" ;
            cin>> latitude ;

            cout<< "enter your new longitude : \n" ;
            cin>> longitude ;

            try 
            {
                location.set_new_location(latitude , longitude) ;
            }
            catch (invalid_argument &s) 
            {
                cout<< s.what() << '\n' ;
            }
        }
        else if(order == "show") 
        {
            location.show_location() ;
        }
        else if(order == "exit") 
        {
            break ;
        }
        else 
        {
            cout<< "if you want to exit write : exit '\n'\n" ;
        }
    }

    return 0 ;
}