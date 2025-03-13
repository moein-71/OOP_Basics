#include "calendar.hpp"

using namespace std ;

vector<Event> Calendar::Event_Table ;
vector<Event> Calendar::Deleted_Events ;


void Calendar::Add_Event() {

    Event add_this ;

    string name ;

    cout<< "Enter your name of event :" << '\n' ;
    cin>> name ;

    //validation

    for(Event Event_Validate : Event_Table) {

        if(Event_Validate.get_name() == add_this.get_name()) {

            cout<< "this name of Event is exist \n" ;
            return ;
        }
    }
    //

    add_this.set_name(name) ;

    Date start_time_of_new_event ;

    cout<< "Enter your start date (year month day) :" << '\n' ;
    cin>> start_time_of_new_event.year >> start_time_of_new_event.month >> start_time_of_new_event.day ;

    add_this.set_start_time(start_time_of_new_event) ;

    Date end_time_of_new_event ;

    cout<< "Enter your end date (year month day) :" << '\n' ;
    cin>> end_time_of_new_event.year >> end_time_of_new_event.month >> end_time_of_new_event.day ;

    add_this.set_end_time(end_time_of_new_event) ;

    //validation

    if(start_time_of_new_event.month > 12 || start_time_of_new_event.day > 30) {
        cout<< "your date is not logical" << '\n' ;
        return ;
    }
    else if(end_time_of_new_event.month > 12 || end_time_of_new_event.day > 30) {
        cout<< "your date is not logical" << '\n' ;
        return ;
    }
    //

    //validation

    if (start_time_of_new_event.year > end_time_of_new_event.year) {
        cout<< "your date is not logical" << '\n' ;
        return ;
    }
    else if (start_time_of_new_event.year == end_time_of_new_event.year && start_time_of_new_event.month > end_time_of_new_event.month) {
        cout<< "your date is not logical" << '\n' ;
        return ;
    }
    else if (start_time_of_new_event.year == end_time_of_new_event.year && start_time_of_new_event.month == end_time_of_new_event.month && start_time_of_new_event.day > end_time_of_new_event.day) {
        cout<< "your date is not logical" << '\n' ;
        return ;
    }
    //

    this -> Event_Table.push_back(add_this) ;
}

void Calendar::Refresh() {
    
    auto now = chrono::system_clock::now() ;
    time_t now_time = chrono::system_clock::to_time_t(now) ;

    int now_year ;
    int now_month ;
    int now_day ;

    tm* local_time = localtime(&now_time) ;

    now_year = local_time -> tm_year + 1900 ;
    now_month = local_time -> tm_mon + 1 ;
    now_day = local_time -> tm_mday ;

    for(int i{} ; i<Event_Table.size() ; ++i) {

       Date end_of_event = Event_Table[i].get_end_time() ;
       
       if (end_of_event.year < now_year) {
        
            Deleted_Events.push_back(Event_Table[i]) ;
            Event_Table.erase(Event_Table.begin() + i) ;
       }
       else if (end_of_event.year == now_year && end_of_event.month < now_month) {
               
            Deleted_Events.push_back(Event_Table[i]) ;
            Event_Table.erase(Event_Table.begin() + i) ;
       }
       else if (end_of_event.year == now_year && end_of_event.month == now_month && end_of_event.day < now_day) {

            Deleted_Events.push_back(Event_Table[i]) ;
            Event_Table.erase(Event_Table.begin() + i) ;
       }
    }
}

void Calendar::Cout_Deleted_Events() {

    for(int i{} ; i<Deleted_Events.size() ; ++i) {
        cout<< Deleted_Events[i].get_name() << '\n' ;
    }

    Deleted_Events.clear() ;
    Deleted_Events.shrink_to_fit() ;
}

void Calendar::print_events() {
    
    for(Event temp_event : Event_Table) {
        cout<< "name : " << temp_event.get_name() ;
        cout<< "    start : " << temp_event.get_start_time().year << '/' << temp_event.get_start_time().month << '/' << temp_event.get_start_time().day << "   " ;
        cout<< " end : " << temp_event.get_end_time().year << '/' << temp_event.get_end_time().month << '/' << temp_event.get_end_time().day << '\n' ;
    }
}