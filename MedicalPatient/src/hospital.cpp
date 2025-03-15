#include "hospital.hpp"

using namespace std ;

Hospital::Hospital() {
    
    Patient_list.reserve(100) ;
}

void Hospital::add_patient(Patient & patient) {

    Patient_list.push_back(patient) ;
}

void Hospital::show_patient() {

    for(int i{} ; i < Patient_list.size() ; ++i) {
        
        cout<< "Name : " << Patient_list[i].get_name() << '\n' ;
        cout<< "Age : " << Patient_list[i].get_age() << '\n' ;
        cout<< "Height : " << Patient_list[i].get_height() << '\n' ;
        cout<< "Weight : " << Patient_list[i].get_weight() << '\n' ;
        cout<< "Body temperature : " << Patient_list[i].get_vital_signs().body_temperature << '\n' ;
        cout<< "Heart rate : " << Patient_list[i].get_vital_signs().heart_rate << '\n' ;
        cout<< "Respiratory rate : " << Patient_list[i].get_vital_signs().respiratory_rate << '\n' ;
        cout<< "Blood pressure : " << Patient_list[i].get_vital_signs().blood_pressure << '\n' ;
    }
}