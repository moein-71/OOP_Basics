#ifndef CHARACTER_IG
#define CHARACTER_IG

#include "skills.hpp"

class Character {

    public :

        Character() ;

        void set_name(std::string name) ;
        void set_health(int health) ;
        void set_power(double power) ;
        void set_skill(Skill skill) ;

        std::string get_name() ;
        int get_health() ;
        double get_power() ;
        Skill get_skill() ;


    private :

        std::string name ;
        int health ;
        double power ;
        std::vector<Skill> skills ;

} ;

#endif //CHARACTER_IG