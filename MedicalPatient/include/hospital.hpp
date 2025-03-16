#ifndef HOSPITAL_IG 
#define HOSPITAL_IG 

#include "patient.hpp"

class Hospital {

    public :

        Hospital() ;
        void add_patient(Patient & patient) ;
        void show_patient() ;

        void set_Patient_list(int NOP) ;
    
        void set_Number_of_patient(int NOP) ; 
        int get_Number_of_patient() ;

    private :

        std::vector<Patient> Patient_list ;

} ;

#endif //HOSPITAL_IG 