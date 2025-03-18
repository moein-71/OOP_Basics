#ifndef SKY_IG
#define SKY_IG

#include "star.hpp"

class Sky {

    public :

        Sky() ;
        
        void add_star(const Star &new_star) ;
        void draw() ;
        
    private :

    std::vector<Star> star_list ;
} ;

#endif //SKY_IG