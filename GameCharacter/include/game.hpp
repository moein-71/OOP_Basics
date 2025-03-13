#ifndef GAME_IG
#define GAME_IG

#include "character.hpp"

class Game {

    public :

        void add_character() ;

        void print_all_characters() ;

    private :

        static std::vector<Character> character ;

} ;

#endif //GAME_IG