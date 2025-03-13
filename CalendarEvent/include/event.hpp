#ifndef EVENT_IG
#define EVENT_IG

#include "date.hpp"

class Event {

    public :

        ~Event() ;
        void set_start_time(Date add_start_time) ;
        void set_end_time(Date add_end_time) ;
        void set_name(std::string name) ;
        std::string get_name() const ;
        Date get_start_time() const ;
        Date get_end_time() const ;

    private :

        std::string event_name ;
        Date start_time ;
        Date end_time ;
} ;

#endif //EVENT_IG