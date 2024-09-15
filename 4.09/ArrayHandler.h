#include <iostream>
#include <cstring>
#include <cstdint>

class ArrayHandler{
private:
    int8_t _max;
    int8_t _min;
    int8_t* _array;
    int8_t* _index_array;
    long long _lenght;
    long long _max_lenght;
public:
    ArrayHandler(int8_t max_lenght = 10){
        _max_lenght = max_lenght;
        _lenght = 0;
        _min = INT8_MAX;
        _max = INT8_MIN;
        _array = new int8_t[max_lenght];
        _index_array = new int8_t[10];
        for (int i = 0; i < 10; i++){
            _index_array[i] = -1;
        }
    }
    void Append(int8_t new_element){
        if (new_element > _max) _max = new_element;
        if (new_element < _min) _min = new_element;
        if (_lenght == _max_lenght){
            int8_t* new_array = new int8_t[_max_lenght * 2];
            _max_lenght += 10;
            std::memcpy(new_array, _array, _lenght * sizeof(int8_t));
            delete [] _array;
            _array = new_array;
        }
        _array[_lenght] = new_element;
        if (_index_array[new_element] == static_cast<int8_t>(-1)){
            _index_array[new_element] = static_cast<int8_t>(_lenght);
        }
        _lenght += 1;
    }
    int GetMax(){
        return _max;
    }
    int GetMin(){
        return _min;
    }
    long long GetIndexElem(int elem){
        if (_index_array[elem] == -1){
            return -1;
        }
        else{
            return _index_array[elem];
        }
    }
    void Print(){
        for (int i = 0; i < _lenght; i++){
            std::cout<<static_cast<int>(_array[i])<<" ";
        }
        std::cout<<std::endl;
    }

    ~ArrayHandler(){
        delete [] _array;
        delete [] _index_array;
    }
};