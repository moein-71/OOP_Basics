#include "hospital.hpp"

using namespace std ;

Patient::Patient(std::string & name , int age , int height , int weight , Vital_signs & patient) : name(name) , age(age) , height(height) , weight(weight) {

    this -> patient.body_temperature = patient.body_temperature ;
    this -> patient.heart_rate = patient.heart_rate ;
    this -> patient.respiratory_rate = patient.respiratory_rate ;
    this -> patient.blood_pressure = patient.blood_pressure ;

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
        else if(stoi(patient.heart_rate) > 30) {
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
        else if(stoi(patient.heart_rate) > 23) {
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
        else if(stoi(patient.heart_rate) > 18) {
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
        else if(stoi(patient.heart_rate) > 25) {
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
        else if(stoi(patient.heart_rate) > 30) {
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
