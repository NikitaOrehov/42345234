#include "ArrayHandler.h"
#include <chrono>
#include <time.h>

int main(){
    srand(time(nullptr));
    ArrayHandler arrayHandler = ArrayHandler(5);

    std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
    for (int i = 0; i < 10; i++) {
        arrayHandler.Append(rand() % 10);
    }
    std::cout << arrayHandler.GetIndexElem(5) << std::endl; 
    std::cout << arrayHandler.GetMax() << std::endl;
    std::cout << arrayHandler.GetMin() << std::endl;

    arrayHandler.Print();
    std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

    std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "[us]" << std::endl;
    std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::nanoseconds> (end - begin).count() << "[ns]" << std::endl;
    return 0;
}