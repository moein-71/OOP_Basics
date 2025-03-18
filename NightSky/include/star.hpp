#ifndef STAR_IG
#define STAR_IG

#include <iostream>
#include <vector>
#include "raylib.h"

class Star {

    public :

        Star() ;
        Star(int x , int y , int brightness) ;
        
        void set_x(int x) ;
        void set_y(int y) ;
        void set_brightness(int brightness) ;

        int get_x() const ;
        int get_y() const ;
        int get_brightness() const ;

    private :

        int x ;
        int y ;
        int brightness ;
} ;

#endif //STAR_IG