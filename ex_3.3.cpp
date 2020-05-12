#include <iostream> 
#include <conio.h> 
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите число: ";
    char chislo;
    long result=0;
    while ((chislo=_getche()) != '\r')
        result = result*10+chislo-'0';// или вычесть 48 для получения из кода символа цифру
    cout <<"Вы ввели число: "<< result<<endl;
    return 0;
}