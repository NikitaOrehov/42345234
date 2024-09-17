#include "Patient.h"

Patient::Patient(){
    _Name = nullptr;
    _Surname = nullptr;
    _Patronymic = nullptr;
    _borh_date = std::chrono::year_month_day() ;
    _gender = NONE;
}


Patient::Patient(std::string surname, std::string name, std::string patr, std::chrono::year_month_day born_date, Gender gender){
    _Name = name;
    _Surname = surname;
    _Patronymic = patr;
    _borh_date = born_date;
    _gender = gender;
}

Patient::Patient(std::string FIO, std::chrono::year_month_day born_date){
    _borh_date = born_date;
    int i = 0;
    int j = 0; 
    while (true){
        if (FIO[j] != 32 && (FIO[j] < 65 || FIO[j] > 90)){
            _Name[i] = FIO[j];
            i++;
            j++;
        }
        else{
            break;
        }
    }

    i = 0;
    if (FIO[j] == 32) j++;
    if (FIO[j] > 65 && FIO[j] < 90){
        _Surname[i] = FIO[j];
        j++;
        i++;
    }
    while (true){
        if (FIO[j] != 32 && (FIO[j] < 65 || FIO[j] > 90)){
            _Surname[i] = FIO[j];
            i++;
            j++;
        }
        else{
            break;
        }
    }

    i = 0;
    if (FIO[j] == 32) j++;
    if (FIO[j] > 65 && FIO[j] < 90){
        _Surname[i] = FIO[j];
        j++;
        i++;
    }
    while (true){
        if (FIO[j] != 32 && FIO.length() != j){
            _Patronymic[i] = FIO[j];
            i++;
            j++;
        }
        else{
            break;
        }
    }
}


void Patient::Define_Gendor(){

}

void Patient::GenerateID(){

}

void Patient::DeterMineFIO(std::string FIO){

}