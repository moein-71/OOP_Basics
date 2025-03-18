#ifndef GPS_IG
#define GPS_IG

#include <iostream>
#include <stdexcept>

class Gps {

    public :
    
        Gps(int latitude , int longitude) ;
        ~Gps() ;

        void set_new_location(int latitude , int longitude) ;
        void show_location() const ;

    private :

        int latitude ;
        int longitude ;
} ;

#endif //GPS_IG