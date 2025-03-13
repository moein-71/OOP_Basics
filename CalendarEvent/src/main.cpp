#include "calendar.hpp"

using namespace std ;

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
        else if(order == "exit") {
            break ;
        }
        else {
            cout<< "if you want to exit write : exit \n" ;
        }
    }

    return 0 ;
}