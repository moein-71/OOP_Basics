#include "game.hpp"
#include "character.hpp"

using namespace std ;

Character::Character(string name , unsigned int health , int power) : name(name) 
{
    set_health(health) ;
    set_power(power) ;

    Skill beginer_skill ;
    beginer_skill.name = "walking" ;
    beginer_skill.level = 1 ;

    skills.push_back(beginer_skill) ;
}

void Character::set_name(std::string name) 
{
    this -> name = name ;
}

void Character::set_health(int health) 
{
    if(health <= 0) {
        cout<< "this health of character is not logical \n" ;
    }

    this -> health = health ;
}

void Character::set_power(double power) 
{
    this -> power = power ;
}

void Character::set_skill(Skill skill)
{
    if(skills.size() >= 10) 
    {
        cout<< "you cant have more skills \n" ;
        return ;
    }

    this -> skills[skills.size()] = skill ;
}

void Character::print_information() const 
{
    cout<< "name : " << name << "    health : " << health << "  power : " << power ;
    
    for(int i{} ; i<skills.size() ; ++i) {
        cout<< "\nskill " << i+1 << " : name(" << skills[i].name << ") level(" << skills[i].level << ")  " ;
    }
    cout<< '\n' << '\n' ;

}