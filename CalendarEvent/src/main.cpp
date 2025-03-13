#include "calendar.hpp"

using namespace std ;

// this is some information about this mini project :
// 1- the first of all this calendar is like a program with some orders like add , refresh , print and exit 
// you are can use every one of them like this : order (for add the program will tell you what you should to type)
// 2- in this project we have lot of validation but i dont validate the time of the added event is passed from real time because i want you to see my refresh function is work
// 3- and i dont validate that if the time of some event have interfere their dont add because in a real calendar many of the events occur at the same time  


int main() {

    Calendar Table ;

    while(1) {

        cout<< "please enter your order \n" ;

        string order ;
        cin>> order ;

        if(order == "add") {
            Table.Add_Event() ;
        }
        else if(order == "refresh") {
            Table.Refresh() ;
        }
        else if(order == "print") {
            Table.print_events() ;
        }
        else if(order == "exit") {
            break ;
        }
        else {
            cout<< "if you want to exit write : exit \n" ;
        }
    }

    return 0 ;
}