#include "PatientQueue.h"

PatientQueue::PatientQueue(){
    _sT = 10;
    _sM = 10;
    _sG = 10;
    _cT = 0;
    _cM = 0;
    _cG = 0;
    _top_patient = new Patient*[_sT];
    _middle_patient = new Patient*[_sM];
    _general_patient = new Patient*[_sG];
    for (int i = 0; i < _sT; i++){
        _top_patient[i] = new Patient;
    }
    for (int i = 0; i < _sT; i++){
        _middle_patient[i] = new Patient;
    }
    for (int i = 0; i < _sT; i++){
        _general_patient[i] = new Patient;
    }
}

Patient* PatientQueue::GetNextPatient(){
    if (_cT != 0){
        int i = 0;
        while (_top_patient[i] != nullptr){
            i++;
        }
        _cT--;
        _top_patient[i] = nullptr;
        return _top_patient[i];
    }
    else if (_cM != 0){
        int i = 0;
        while (_middle_patient[i] != nullptr){
            i++;
        }
        _cM--;
        _middle_patient[i] = nullptr;
        return _middle_patient[i];
    }
    else if (_cG != 0){
        int i = 0;
        while (_general_patient[i] != nullptr){
            i++;
        }
        _cG--;
        _general_patient[i] = nullptr;
        return _general_patient[i];
    }
    else{
        std::cout<<"work day is over\n";
        exit(1);
    }
}

void PatientQueue::AppendPatient(Patient* pat){
    if (pat->GetEstate() == I){
        if (_cT != 11){
            _top_patient[_cT] = pat;
            _cT++;
        }
        else if(_cM != 11){
            
        }
        else{

        }
    }
    else if (pat->GetEstate() == II){
        if (_cM != 11){
            _middle_patient[_cM] = pat;
            _cM++;
        }
        else{

        }
    }
    else{
        if (_cG != 11){
            _general_patient[_cG] = pat;
            _cG++;
        }
    }
}


PatientQueue::~PatientQueue(){
        delete [] _top_patient;
        delete [] _middle_patient;
        delete [] _general_patient;
    }