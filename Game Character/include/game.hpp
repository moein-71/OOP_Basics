#ifndef GAME_IG
#define GAME_IG

#include "character.hpp"

class Game {

    public :

        Game() ;

        void set_character() ;
        Game get_character() ;


    private :

        static std::vector<Character> character ;

} ;

#endif //GAME_IG