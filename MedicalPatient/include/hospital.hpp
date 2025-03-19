#ifndef HOSPITAL_IG 
#define HOSPITAL_IG 

#include "patient.hpp"

class Hospital {

    public :

        Hospital() ;
        void add_patient(Patient & patient) ; // this func is for adding a patient
        void show_patient() ; // this func is for showing the patient list on the console 

        void set_Patient_list(int NOP) ; // this func is for reading the patients from the file and set them in to the patient_list
    
        void set_Number_of_patient(int NOP) ; // this func is for writing the Number of patient in to the txt file 
        int get_Number_of_patient() const; // this func is for reading the Number of patient from the txt file 

    private :

        std::vector<Patient> Patient_list ;

} ;

#endif //HOSPITAL_IG 