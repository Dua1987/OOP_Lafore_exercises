#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int invest;
    int year;
    float rate;
    float profit=1;
    cout << "Введите начальный вклад: "; cin >> invest;
    cout << "Введите число лет: "; cin >> year;
    cout << "Введите процентную ставку: "; cin >> rate;
    for (int i = 0; i < year; i++)
    {
        profit = invest + (invest * (rate / 100));
    }
    cout << "Через "<<year<<" лет Вы получите "<<profit<<" рублей.";
    return 0;
}