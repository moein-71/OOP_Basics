#ifndef EVENT_IG
#define EVENT_IG

#include <iostream>
#include <string>

class Event {

    public :

        ~Event() ;

    private :

        std::string event_name ;
        int start_time ;
        int end_time ;

} ;



#endif //EVENT_IG