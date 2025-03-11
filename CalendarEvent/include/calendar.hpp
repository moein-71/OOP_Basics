#ifndef CALENDAR_IG
#define CALENDAR_IG

#include "event.hpp"

//std::string event_name , int start_time , int end_time

class Calendar {

    public :

        void Add_Event(Event add_this) ;
        void Refresh() ;

    private :

        std::vector<Event> Event_Table ;

} ;

#endif //CALENDAR_IG