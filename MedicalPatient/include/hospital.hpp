#ifndef HOSPITAL_IG 
#define HOSPITAL_IG 

#include "patient.hpp"

class Hospital {

    public :

        void add_patient() ;
        void show_patient() ;

    private :

        std::vector<Patient> Patient_list ;

} ;

#endif //HOSPITAL_IG 