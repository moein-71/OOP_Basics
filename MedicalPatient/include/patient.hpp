#ifndef PATIENT_IG
#define PATIENT_IG

#include "vital_signs.hpp"

class Patient {

    public :

        Patient(std::string & name , int age , int height , int weight , Vital_signs & patient) ;
        //~Patient() ;

        std::string get_name() ;
        int get_age() ;
        int get_height() ;
        int get_weight() ;
        Vital_signs get_vital_signs() ;

    private :

        std::string name ;
        int age ;
        int height ;
        int weight ;
        Vital_signs patient ;
} ;

#endif //PATIENT_IG