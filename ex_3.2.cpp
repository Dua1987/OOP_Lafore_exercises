#include <iostream> 
#include <iomanip> 
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    float ftemp;
    float ctemp;
    cout << "Нажмите \n\t1 для перевода шкалы Цельсия в шкалу Фаренгейта,\n\t2 для перевода шкалы Фаренгейта в шкалу Цельсия \n";
    int choice;
    cin >> choice; cout << endl;
    switch (choice) {
    case 1:
        cout << "Введите температуру по Фаренгейту: ";
        cin >> ftemp;
        cout << "Значение по Цельсию: ";
        ctemp = (ftemp - 32.0) * 5 / 9;
        cout << setprecision(3) << ctemp << endl;
        break;
    case 2:
        cout << "Введите температуру по Цельсию: ";
        cin >> ctemp;
        cout << "Значение по Фаренгейту: ";
        ftemp = 9 / 5 * ctemp + 32.0;
        cout << setprecision(3) << ftemp << endl;
        break; 
    }
    

    return 0;
}