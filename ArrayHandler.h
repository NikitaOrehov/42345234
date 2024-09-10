#include <iostream>
#include <cstring>
#include <cstdint>

class ArrayHandler{
private:
    int _max;
    int _min;
    int* _array;
    int _lenght;
    int _max_lenght;
public:
    ArrayHandler(int max_lenght = 10){
        _max_lenght = max_lenght;
        _lenght = 0;
        _min = INT32_MAX;
        _max = INT32_MIN;
        _array = new int[max_lenght];
    }
    void Append(int new_element){
        if (new_element > _max) _max = new_element;
        if (new_element < _min) _min = new_element;
        if (_lenght == _max_lenght){
            int* new_array = new int[_max_lenght + 10];
            _max_lenght += 10;
            std::memcpy(new_array, _array, 4 * sizeof(int));
            delete [] _array;
            _array = new_array;
        }
        _array[_lenght] = new_element;
        _lenght += 1;
    }
    int GetMax(){
        return _max;
    }
    int GetMin(){
        return _min;
    }
    int GetIndexElem(int elem){
        for (int i = 0; i < _lenght; i++){
            if (_array[i] == elem){
                return i;
            }
        }
        return -1;
    }
    void Print(){
        for (int i = 0; i < _lenght; i++){
            std::cout<<_array[i]<<" ";
        }
        std::cout<<std::endl;
    }
    ~ArrayHandler(){
        delete [] _array;
    }
};