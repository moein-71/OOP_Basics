#include "event.hpp"

using namespace std ;

Event::~Event(){

}

int Event::unix_maker() {

    
}

void Event::set_name(std::string name) {
    this -> event_name = name ;
}

void Event::set_start_time(Date add_start_time) {
    this -> start_time = add_start_time ;
}

void Event::set_end_time(Date add_end_time) {
    this -> end_time = add_end_time ;
}
        
string Event::get_name() {
    return this -> event_name ;
}

Date Event::get_start_time() {
    return this -> start_time ;
}
Date Event::get_end_time() {
    return this -> end_time ;
}

