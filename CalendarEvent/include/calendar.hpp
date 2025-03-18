#ifndef CALENDAR_IG
#define CALENDAR_IG

#include "event.hpp"

//std::string event_name , int start_time , int end_time

class Calendar {

    public :

        Calendar() ;
        void Add_Event(Event &add_this) ;
        void Refresh() ;
        void Cout_Deleted_Events() const ;
        void print_events() const ;
        

    private :
        static std::vector<Event> Event_Table ;
        static std::vector<int> Ptr_Deleted ;
} ;

#endif //CALENDAR_IG