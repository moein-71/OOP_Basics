#ifndef CALENDAR_IG
#define CALENDAR_IG

#include "event.hpp"

//std::string event_name , int start_time , int end_time

class Calendar {

    public :
        void Add_Event() ;
        void Refresh() ;
        static void Cout_Deleted_Events() ;
        void print_events() ;
        

    private :
        static std::vector<Event> Event_Table ;
        static std::vector<Event> Deleted_Events ;
} ;

#endif //CALENDAR_IG