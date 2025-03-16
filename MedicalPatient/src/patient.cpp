#include "hospital.hpp"

using namespace std ;

Patient::Patient(std::string & name , int age , int height , int weight , Vital_signs & patient) : name(name) , age(age) , height(height) , weight(weight) {

    this -> patient.body_temperature = patient.body_temperature ;
    this -> patient.heart_rate = patient.heart_rate ;
    this -> patient.respiratory_rate = patient.respiratory_rate ;
    this -> patient.blood_pressure = patient.blood_pressure ;

    cout<< "Patient " << name << " : " << '\n' ; 

    if(stof(patient.body_temperature) < 36) {
        cout<< '\n' << "body temperature is lower than normal point" << '\n' ;
    }
    else if(stof(patient.body_temperature) > 37.5) {
        cout<< "body temperature is higher than normal point" << '\n' ;
    }
    else {
        cout<< "body temperature is normal" << '\n' ;
    }

    if(stoi(patient.heart_rate) < 60) {
        cout<< "heart rate is lower than normal point" << '\n' ;
    }
    else if(stoi(patient.heart_rate) > 100) {
        cout<< "heart rate is higher than normal point" << '\n' ;
    }
    else {
        cout<< "heart rate is normal" << '\n' ;
    }

    if(age <= 3) {

        if(stoi(patient.respiratory_rate) < 20) {
            cout<< "respiratory rate is lower than normal point" << '\n' ;
        }
        else if(stoi(patient.respiratory_rate) > 30) {
            cout<< "respiratory rate is higher than normal point" << '\n' ;
        }
        else {
            cout<< "respiratory rate is normal" << '\n' ;
        }
    }
    else if(age <= 10) {

        if(stoi(patient.respiratory_rate) < 17) {
            cout<< "respiratory rate is lower than normal point" << '\n' ;
        }
        else if(stoi(patient.respiratory_rate) > 23) {
            cout<< "respiratory rate is higher than normal point" << '\n' ;
        }
        else {
            cout<< "respiratory rate is normal" << '\n' ;
        }
    }
    else if(age <= 30) {

        if(stoi(patient.respiratory_rate) < 15) {
            cout<< "respiratory rate is lower than normal point" << '\n' ;
        }
        else if(stoi(patient.respiratory_rate) > 18) {
            cout<< "respiratory rate is higher than normal point" << '\n' ;
        }
        else {
            cout<< "respiratory rate is normal" << '\n' ;
        }
    }
    else if(age <= 50) {

        if(stoi(patient.respiratory_rate) < 18) {
            cout<< "respiratory rate is lower than normal point" << '\n' ;
        }
        else if(stoi(patient.respiratory_rate) > 25) {
            cout<< "respiratory rate is higher than normal point" << '\n' ;
        }
        else {
            cout<< "respiratory rate is normal" << '\n' ;
        }
    }
    else {

        if(stoi(patient.respiratory_rate) < 10) {
            cout<< "respiratory rate is lower than normal point" << '\n' ;
        }
        else if(stoi(patient.respiratory_rate) > 30) {
            cout<< "respiratory rate is higher than normal point" << '\n' ;
        }
        else {
            cout<< "respiratory rate is normal" << '\n' ;
        }
    }

    if(stoi(patient.blood_pressure) < 80) {
        cout<< "blood pressure is lower than normal point" << '\n' ;
    } 
    else if(stoi(patient.blood_pressure) > 120) {
        cout<< "blood pressure is higher than normal point" << '\n' ;
    }
    else {
        cout<< "blood pressure is normal" << '\n' ;
    }

    cout<< '\n' ;
}

Patient::Patient() {

}

    Patient::~Patient() {

        ofstream patient_file("patient_file.txt" , ios::app) ;
        
        patient_file << encryption_and_decryption(name) << ' ' ;
        patient_file << encryption_and_decryption(to_string(age)) << ' ' ;
        patient_file << encryption_and_decryption(to_string(height)) << ' ' ;
        patient_file << encryption_and_decryption(to_string(weight)) << ' ' ;
        patient_file << encryption_and_decryption(patient.body_temperature) << ' ' ;
        patient_file << encryption_and_decryption(patient.heart_rate) << ' ' ;
        patient_file << encryption_and_decryption(patient.respiratory_rate) << ' ' ;
        patient_file << encryption_and_decryption(patient.blood_pressure) << ' ' ;         

    }

    string Patient::encryption_and_decryption(string input) {

        char changer = 'T' ;

        for(int i{} ; i < input.size() ; ++i) {

            input[i] = input[i] ^ changer ;
        }

        return input ;
    }

    void Patient::set_name(std::string name) {
        this -> name = name ;
    }

    void Patient::set_age(int age) {
        this -> age = age ;
    }

    void Patient::set_height(int height) {
        this -> height = height ;
    }

    void Patient::set_weight(int weight) {
        this -> weight = weight ;
    }

    void Patient::set_body_temperature(const string & body_temperature) {

        patient.body_temperature = body_temperature ;
    }

    void Patient::set_heart_rate(const string & heart_rate) {

        patient.heart_rate = heart_rate ;
    }

    void Patient::set_respiratory_rate(const string & respiratory_rate) {

        patient.respiratory_rate = respiratory_rate ;
    }

    void Patient::set_blood_pressure(const string & blood_pressure) {

        patient.blood_pressure = blood_pressure ;
    }

    std::string Patient::get_name() {
        return this -> name ;
    }

    int Patient::get_age() {
        return this -> age ;
    }

    int Patient::get_height() {
        return this -> height ;
    }

    int Patient::get_weight() {
        return this -> weight ;
    }

    Vital_signs Patient::get_vital_signs() {
        return this -> patient ;
    }
