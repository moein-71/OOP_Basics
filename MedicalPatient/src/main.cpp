#include "hospital.hpp"

using namespace std ;

int main() {

    Hospital Hospital_system ;

    // in this we should read from file and set the old patient
    
    while(1) {

        string order ;
        cin>> order ;

        if(order == "add") {

            string name ;
            cin>> name ;
            
            int age ;
            cin>> age ;

            int height ;
            cin>> height ;

            int weight ;
            cin>> weight ;

            Vital_signs patient ;
            
            if(!patient.set_Vital_signs()) {
                continue ;
            }

            Patient add_patient(name , age , height , weight , patient) ;

            Hospital_system.add_patient(add_patient) ;
        }
        else if(order == "show") {
            Hospital_system.show_patient() ;
        }
        else if(order == "exit") {
            break ;
        }
        else {
            cout<< "if you want to exit write : exit" ;
        }
    }
    
    return 0 ;
}