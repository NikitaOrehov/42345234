#pragma once
#include "Patient.h"

class Doctor{
private:


public:
    void Next(Patient* patient);
    void CheckPatient(Patient* patient);
    void Think(std::string diag); //diagnos;
};