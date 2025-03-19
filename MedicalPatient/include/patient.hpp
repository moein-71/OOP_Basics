#ifndef PATIENT_IG
#define PATIENT_IG

#include "vital_signs.hpp"

class Patient {

    public :

        Patient() ;
        Patient(const std::string & name , int age , int height , int weight , const Vital_signs & patient) ;
        ~Patient() ;

        std::string encryption_and_decryption(std::string input) ;

        void set_name(const std::string & name) ;
        void set_age(int age) ;
        void set_height(int height) ;
        void set_weight(int weight) ;
        void set_body_temperature(const std::string & body_temperature) ;
        void set_heart_rate(const std::string & heart_rate) ;
        void set_respiratory_rate(const std::string & respiratory_rate) ;
        void set_blood_pressure(const std::string & blood_pressure) ;

        std::string get_name() const ;
        int get_age() const ;
        int get_height() const ;
        int get_weight() const ;
        Vital_signs get_vital_signs() const ;

    private :

        std::string name ;
        int age ;
        int height ;
        int weight ;
        Vital_signs patient ;
} ;

#endif //PATIENT_IG