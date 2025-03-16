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
        
        cout<< '\n' << "Name : " << Patient_list[i].get_name() << '\n' ;
        cout<< "Age : " << Patient_list[i].get_age() << '\n' ;
        cout<< "Height : " << Patient_list[i].get_height() << '\n' ;
        cout<< "Weight : " << Patient_list[i].get_weight() << '\n' ;
        cout<< "Body temperature : " << Patient_list[i].get_vital_signs().body_temperature << '\n' ;
        cout<< "Heart rate : " << Patient_list[i].get_vital_signs().heart_rate << '\n' ;
        cout<< "Respiratory rate : " << Patient_list[i].get_vital_signs().respiratory_rate << '\n' ;
        cout<< "Blood pressure : " << Patient_list[i].get_vital_signs().blood_pressure << "\n" ;
    }

    cout<< '\n' ;
}

void Hospital::set_Number_of_patient(int NOP) {

    ofstream NOP_file("Number_of_patient.txt") ;

    NOP_file << to_string(NOP) ;
}

int Hospital::get_Number_of_patient() {

    if(filesystem::exists("Number_of_patient.txt")) {

        ifstream NOP_file("Number_of_patient.txt") ;

        string NOP ;

        NOP_file >> NOP ;

        return stoi(NOP) ;
    }
    else {
        return 0 ;
    }
}

void Hospital::set_Patient_list(int NOP) {

    ifstream patient_file("patient_file.txt") ;

    for(int i{} ; i < NOP ; ++i) {

        Patient add_patient ;

        string name ;
        patient_file >> name ;
        add_patient.set_name(add_patient.encryption_and_decryption(name)) ;
        
        string age ;
        patient_file >> age ;
        add_patient.set_age(stoi(add_patient.encryption_and_decryption(age))) ;

        string height ;
        patient_file >> height ;
        add_patient.set_height(stoi(add_patient.encryption_and_decryption(height))) ;

        string weight ;
        patient_file >> weight ;
        add_patient.set_weight(stoi(add_patient.encryption_and_decryption(weight))) ;

        string body_temperature ;
        patient_file >> body_temperature ;
        add_patient.set_body_temperature(add_patient.encryption_and_decryption(body_temperature)) ;

        string heart_rate ;
        patient_file >> heart_rate ; 
        add_patient.set_heart_rate(add_patient.encryption_and_decryption(heart_rate)) ;


        string respiratory_rate ;
        patient_file >> respiratory_rate ;
        add_patient.set_respiratory_rate (add_patient.encryption_and_decryption(respiratory_rate)) ;

        string blood_pressure ;
        patient_file >> blood_pressure ;
        add_patient.set_blood_pressure(add_patient.encryption_and_decryption(blood_pressure)) ;

        Patient_list.push_back(add_patient) ;
    }
} 