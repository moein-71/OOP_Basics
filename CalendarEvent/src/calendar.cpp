#include "calendar.hpp"

using namespace std ;

vector<Event> Calendar::Event_Table ;
vector<int> Calendar::Ptr_Deleted ;

Calendar::Calendar() {
    this -> Event_Table.reserve(100) ;
}

void Calendar::Add_Event() {

    string name ;

    cout<< "Enter your name of event :" << '\n' ;
    cin>> name ;

    //validation

    for(int i{} ; i < Event_Table.size() ; ++i) {

        if(Event_Table[i].get_name() == name) {

            cout<< "this name of Event is exist \n" ;
            return ;
        }
    }
    //

    Date start_time_of_new_event ;

    cout<< "Enter your start date (year month day) :" << '\n' ;
    cin>> start_time_of_new_event.year >> start_time_of_new_event.month >> start_time_of_new_event.day ;

    Date end_time_of_new_event ;

    cout<< "Enter your end date (year month day) :" << '\n' ;
    cin>> end_time_of_new_event.year >> end_time_of_new_event.month >> end_time_of_new_event.day ;

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

    Event add_this ;

    add_this.set_name(name) ;

    add_this.set_start_time(start_time_of_new_event) ;

    add_this.set_end_time(end_time_of_new_event) ;

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

        bool its_init = false ;
        for(int j{} ; j < Ptr_Deleted.size() ; ++j) {

            if(i == Ptr_Deleted[j]) {
                its_init = true ;
                break ;
            }
        }

        if(its_init) {
            continue ;
        }
       Date end_of_event = Event_Table[i].get_end_time() ;
       
       if (end_of_event.year < now_year) {
        
            Ptr_Deleted.push_back(i) ;
       }
       else if (end_of_event.year == now_year && end_of_event.month < now_month) {
               
            Ptr_Deleted.push_back(i) ;
       }
       else if (end_of_event.year == now_year && end_of_event.month == now_month && end_of_event.day < now_day) {

            Ptr_Deleted.push_back(i) ;
       }
    }
}

void Calendar::Cout_Deleted_Events() {

   for(int i{} ; i < Ptr_Deleted.size() ; ++i) {
        cout<< Event_Table[Ptr_Deleted[i]].get_name() << '\n' ;
   }
}

void Calendar::print_events() const {
    
    for(Event temp_event : Event_Table) {
        cout<< "name : " << temp_event.get_name() ;
        cout<< "    start : " << temp_event.get_start_time().year << '/' << temp_event.get_start_time().month << '/' << temp_event.get_start_time().day << "   " ;
        cout<< " end : " << temp_event.get_end_time().year << '/' << temp_event.get_end_time().month << '/' << temp_event.get_end_time().day << '\n' ;
    }
}