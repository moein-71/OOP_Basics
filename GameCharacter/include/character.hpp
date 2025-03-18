#ifndef CHARACTER_IG
#define CHARACTER_IG

#include "skills.hpp"

class Character {

    public :

        Character(std::string name = "anonymous"  , unsigned int health = 100 , int power = 0) ;

        void set_name(std::string name) ;
        void set_health(int health) ;
        void set_power(double power) ;
        void set_skill(Skill skill) ;

        void print_information() const ;


    private :

        std::string name ;
        unsigned int health ;
        double power ;
        std::vector<Skill> skills ;

} ;

#endif //CHARACTER_IG