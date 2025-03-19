#include "hospital.hpp"

using namespace std ;

int main() 
{
    Hospital Hospital_system ;

    int Number_of_patient =  Hospital_system.get_Number_of_patient() ; 

    if(Number_of_patient > 0) 
    {
        Hospital_system.set_Patient_list(Number_of_patient) ; 
    }

    while(1) 
    {
        string order ;
        
        cout<< "enter your order : " ;
        cin>> order ;

        if(order == "add") 
        {

            string name ;
            cout<< '\n' << "enter patient name : " ;
            cin>> name ;
            
            int age ;
            cout<< '\n' << "enter patient age : " ;
            cin>> age ;

            int height ;
            cout<< '\n' << "enter patient height : " ;
            cin>> height ;

            int weight ;
            cout<< '\n' << "enter patient weight : " ;
            cin>> weight ;

            Vital_signs patient ;
            
            if(!patient.set_Vital_signs()) 
            {
                continue ;
            }

            ++Number_of_patient ;

            Patient add_patient(name , age , height , weight , patient) ;

            Hospital_system.add_patient(add_patient) ;
        }
        else if(order == "show") 
        {
            Hospital_system.show_patient() ;
        }
        else if(order == "exit") 
        {
            Hospital_system.set_Number_of_patient(Number_of_patient) ;
            remove("patient_file.txt") ;
            break ;
        }
        else 
        {
            cout<< "if you want to exit write : exit" ;
        }
    }
    
    return 0 ;
}