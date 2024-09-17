#include <string>
#include <chrono>
#include <iostream>


enum Gender{Women, Man, NONE};

class Patient{
private:
    std::string _Name;
    std::string _Surname;
    std::string _Patronymic;
    std::chrono::year_month_day _borh_date;
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

};