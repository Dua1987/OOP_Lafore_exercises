#include <iostream> 
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int pounds;
    int shilling;
    int penny;
    float decpound;//сумма в дес€тичном формате
    float decfranc;//дес€тична€ дробь
    cout << "¬ведите число дес€тичных фунтов: "; cin >> decpound;
    pounds = static_cast<int>(decpound);
    decfranc = decpound - pounds;
    shilling = decfranc * 20;
    penny = (((decfranc * 20) - shilling) * 12);
    cout << "Ёквивалентна€ сумма в старой форме записи: \x9C"<<pounds<<"."<<shilling<<"."<<penny<<endl; //обозначение фунта 9C в 16ой коде, однако веро€тно консоль на этот код есть только знак вопроса
    return 0;//ответ J3.10.2 if entered 3.51
}