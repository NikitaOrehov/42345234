#pragma once
#include "Patient.h"

class PatientQueue{
private:
    Patient** _top_patient;
    Patient** _middle_patient;
    Patient** _general_patient;
    size_t _cT;
    size_t _cM;
    size_t _cG;
    size_t _sT;
    size_t _sM;
    size_t _sG;
public:
    PatientQueue();
    Patient* GetNextPatient();
    void AppendPatient(Patient* pat);
    ~PatientQueue();
};