#ifndef CALENDAR_IG
#define CALENDAR_IG

#include "event.hpp"

//std::string event_name , int start_time , int end_time

class Calendar {

    public :

        void Add_Event() ;
        void Refresh() ;
        void Cout_Deleted_Events() ;

        static std::vector<Event> Event_Table ;
        static std::vector<Event> Deleted_Events ;

    private :

} ;

#endif //CALENDAR_IG