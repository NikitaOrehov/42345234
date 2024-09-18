#include "Patient.h"

Patient::Patient(){
    _Name = "nullptr";
    _Surname = "nullptr";
    _Patronymic = "nullptr";
    _borh_date = std::chrono::year_month_day();
    _gender = NONE;
    RandEstate();
}


Patient::Patient(std::string surname, std::string name, std::string patr, std::chrono::year_month_day born_date, Gender gender){
    _Name = name;
    _Surname = surname;
    _Patronymic = patr;
    _borh_date = born_date;
    _gender = gender;
    RandEstate();
}

Patient::Patient(std::string FIO, std::chrono::year_month_day born_date){
    _borh_date = born_date;
    DeterMineFIO(FIO);
    Define_Gendor();
    RandEstate();
}


void Patient::Define_Gendor(){
    if (_Patronymic[_Patronymic.length() - 1] == 104){
        _gender = Man;
    }
    else _gender = Women;
}

void Patient::GenerateID(){

}

void Patient::DeterMineFIO(std::string FIO){
    int ind1 = FIO.find(' ');
    int ind2 = FIO.find(' ', ind1 + 1);
    _Surname = FIO.substr(0, ind1);
    _Name = FIO.substr(ind1 + 1, ind2 - ind1 - 1);
    _Patronymic = FIO.substr(ind2 + 1);
}

void Patient::PrintPatient(){
    std::cout<<_Surname<<" "<<_Name<<" "<<_Patronymic<<"\n";
}

void Patient::RandEstate(){
    int r = rand() % 3;
    switch (r){
        case 0: _estate = I; break;
        case 1: _estate = II; break;
        case 2: _estate = III; break;
    }
}

Estate Patient::GetEstate() const {
    return _estate;
}