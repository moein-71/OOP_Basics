#ifndef EVENT_IG
#define EVENT_IG

#include <iostream>
#include <string>
#include <ctime>
#include <vector>

class Event {

    public :

        ~Event() ;
        std::string get_name() ;
        int unix_maker() ;

    private :

        std::string event_name ;
        int start_time ;
        int end_time ;
        std::vector<Event> Deleted_Events ;

} ;



#endif //EVENT_IG