#ifndef PATIENT_IG
#define PATIENT_IG

#include "vital_signs.hpp"

class Patient {

    public :

        Patient(std::string name , int age , int height , int weight , Vital_signs patient) ;
        ~Patient() ;

    private :

        std::string name ;
        int age ;
        int height ;
        int weight ;
        Vital_signs patient ;
} ;

#endif //PATIENT_IG