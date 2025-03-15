#include "hospital.hpp"

using namespace std ;

bool Vital_signs::set_Vital_signs() {

    cout<< "Enter body temperature : " ;
    cin>> this -> body_temperature ;

    for(char validate_body_temperature : body_temperature) {

        if(validate_body_temperature > 57 || validate_body_temperature < 48) {
            cout<< "your body temperature is not logical" << '\n' ;
            return false ;
        }
    }

    cout<< '\n' << "Enter heart rate : " ;
    cin>> this -> heart_rate ;

    for(char validate_heart_rate : heart_rate) {

        if(validate_heart_rate > 57 || validate_heart_rate < 48) {
            cout<< "your heart rate is not logical" << '\n' ;
            return false ;
        }
    }

    cout<< '\n' << "Enter respiratory rate : " ;
    cin>> this -> respiratory_rate ;
    
    for(char validate_respiratory_rate : respiratory_rate) {

        if(validate_respiratory_rate > 57 || validate_respiratory_rate < 48) {
            cout<< "your respiratory rate is not logical" << '\n' ;
            return false ;
        }
    }

    cout<< '\n' << "Enter blood pressure : " ;
    cin>> this -> blood_pressure ;

    for(char validate_blood_pressure : blood_pressure) {

        if(validate_blood_pressure > 57 || validate_blood_pressure < 48) {
            cout<< "your blood pressure is not logical" << '\n' ;
            return false ;
        }
    }

    cout<< '\n' ;
}