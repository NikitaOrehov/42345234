//класс хранящий инф о макс и мин элем и с самой высокой скорость позволяет найти элм и доб элм
#include "ArrayHandler.h"
int main(){
    ArrayHandler one = ArrayHandler(3);
    one.Append(1);
    one.Append(2);
    one.Append(6);
    one.Append(6);
    one.Append(6);
    int min = one.GetMin();
    one.Print();
    return 0;
}