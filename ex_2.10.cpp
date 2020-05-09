#include <iostream> 
#include <iomanip> // дл€ setprecision()
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    float pound;
    float shilling;
    float penny;
    float decpound;
    cout << "¬ведите количество фунтов: "; cin >> pound;
    cout << "\n¬ведите количество шиллингов: "; cin >> shilling;
    cout << "\n¬ведите количество пенсов: "; cin >> penny;
    decpound = ((pound*240)+(shilling * 12 + penny))/240;
    cout << "\nƒес€тичных фунтов: \x9C"<<setprecision(3)<<decpound<<endl; //обозначение фунта 9C в 16ой коде, однако веро€тно консоль на этот код есть только знак вопроса
    //<iomanip> дл€ setprecision() определ€ет количество знаков после зап€той
    return 0;//ответ J5.1333
}