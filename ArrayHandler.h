#include <iostream>
#include <cstring>
#include <cstdint>

class ArrayHandler{
private:
    int8_t _max;
    int8_t _min;
    int8_t* _array;
    long long _lenght;
    long long _max_lenght;
public:
    ArrayHandler(int max_lenght = 10){
        _max_lenght = max_lenght;
        _lenght = 0;
        _min = INT8_MAX;
        _max = INT8_MIN;
        _array = new int8_t[max_lenght];
    }
    void Append(int8_t new_element){
        if (new_element > _max) _max = new_element;
        if (new_element < _min) _min = new_element;
        if (_lenght == _max_lenght){
            int8_t* new_array = new int8_t[_max_lenght * 4];
            _max_lenght += 10;
            std::memcpy(new_array, _array, _lenght * sizeof(int8_t));
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
    long long GetIndexElem(int8_t elem){
        //дополнительная память для хранения первого встречного индекса
        //бинарный поиск
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