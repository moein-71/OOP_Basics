#include "game.hpp"
#include "character.hpp"

using namespace std ;

vector<Character> Game::character ;

void Game::add_character() {

    Character add_charcarter ;

    string name ;

    cout<< "enter your character name \n" ;
    cin>> name ;

    add_charcarter.set_name(name) ;

    character.push_back(add_charcarter) ;
}

void Game::print_all_characters() {

    for(Character cout_character : character) {
        cout_character.print_information() ;
    }

}