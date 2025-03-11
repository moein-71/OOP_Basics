#ifndef DATE_IG
#define DATE_IG

#include <iostream>

class Date {

    public :
        long int Date_on_unix() ;
        void set_year(int year) ;
        void set_month(int month) ;
        void set_day(int day) ;

    private :
       int year ;
       int month ;
       int day ; 

} ;


#endif //DATE_IG