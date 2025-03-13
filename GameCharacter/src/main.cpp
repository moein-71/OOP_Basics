#include "character.hpp"
#include "game.hpp"

using namespace std ;

// this is some information about this mini project :
// in this mini project i can add lot of feature like : editing abilitys ( name , health , power ) , adding another skills for any character and ...
// but this thicks is enough for this mini project 
// you are can add character with : add (following the prosses)
// you are can print all of characters with : print    

int main() {

    Game Test_Game ;

    while (1)
    {
        cout<< "enter your order : " ;
        string order ;
        cin>> order ;
        
        if(order == "add") {
            Test_Game.add_character() ;
            
        }
        else if(order == "print") {
            Test_Game.print_all_characters() ;
        }
        else if(order == "exit") {
            break ;
        }
        else {
            cout<< "if you want to exit write : exit \n" ;
        }
    }
    

    return 0 ;
}