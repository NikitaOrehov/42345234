#include "Patient.h"
#include "PatientQueue.h"
#include "Doctor.h"

using namespace std::chrono;

int main(){
    // PatientQueue patientQueue;
    // Doctor doc;
    while (true){//считать из файла
        std::string fio = "Orehov Nikita Antonovich";
        std::chrono::year_month_day data = {std::chrono::month(1) / 10 / 2005};
        Patient p(fio, data);
        p.PrintPatient();
        break;
    }
    while (true){
        
    }
    return 0;
}