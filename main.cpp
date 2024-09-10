#include "ArrayHandler.h"
int main(){
    ArrayHandler arrayHandler = ArrayHandler(5);

    // std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
    for (int i = 0; i < 10000; i++) {
        arrayHandler.Append(rand() % 100);
    }
    std::cout << arrayHandler.GetIndexElem(19) << std::endl; 
    std::cout << arrayHandler.GetMax() << std::endl;
    std::cout << arrayHandler.GetMin() << std::endl;

    // std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

    // std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "[µs]" << std::endl;
    // std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::nanoseconds> (end - begin).count() << "[ns]" << std::endl;

    // arrayHandler.Print();
    return 0;
}