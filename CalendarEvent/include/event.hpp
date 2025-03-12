#ifndef EVENT_IG
#define EVENT_IG

#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include <chrono>
#include "date.hpp"

class Event {

    public :

        ~Event() ;
        void set_start_time(Date add_start_time) ;
        void set_end_time(Date add_end_time) ;
        void set_name(std::string name) ;
        std::string get_name() ;
        Date get_start_time() ;
        Date get_end_time() ;
        int unix_maker() ;

    private :

        std::string event_name ;
        Date start_time ;
        Date end_time ;
} ;



#endif //EVENT_IG