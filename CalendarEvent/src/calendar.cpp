#include "calendar.hpp"
#include "event.hpp"

using namespace std ;

void Calendar::Add_Event(Event add_this) {

    for(Event Event_Validate : Event_Table) {

        if(Event_Validate.get_name() == add_this.get_name()) {

            cout<< "this name of Event is exist \n" ;
            return ;
        }
    }
    this -> Event_Table.push_back(add_this) ;
}

void Calendar::Refresh() {
    
}