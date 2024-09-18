#pragma once
#include <string>
#include <chrono>
#include <iostream>
#include <random>


enum Gender{Women, Man, NONE};

enum Estate{I, II, III};

class Patient{
private:
    std::string _Name;
    std::string _Surname;
    std::string _Patronymic;
    std::chrono::year_month_day _borh_date;
    Estate _estate;
    //UUID _uuid;
    //Diagnos* _diagnos;
    Gender _gender;
    // std::string _healfProblem;
    void Define_Gendor();
    void GenerateID();
    void DeterMineFIO(std::string FIO);
public:
    Patient();
    Patient(std::string surname, std::string name, std::string patr, std::chrono::year_month_day born_date, Gender gender);
    Patient(std::string FIO, std::chrono::year_month_day born_date);
    void PrintPatient();
    void RandEstate();
    Estate GetEstate() const ;

};