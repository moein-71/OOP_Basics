#ifndef vital_signs_IG
#define vital_signs_IG

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <filesystem>
#include<bits/stdc++.h> 

struct Vital_signs {

    std::string body_temperature ;
    std::string heart_rate ;
    std::string respiratory_rate ;
    std::string blood_pressure ;

    bool set_Vital_signs() ;
} ;

#endif //vital_signs_IG