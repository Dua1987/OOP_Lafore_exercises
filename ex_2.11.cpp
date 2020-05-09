#include <iostream> 
#include <iomanip> 
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    cout << setiosflags(ios::left) << setw(10) << "Фамилия" << setw(10) << "Имя" << setw(21) << "Адрес" << setw(19) << "Город" << endl
        << setfill('-') << setw(60) << "-" << endl
        << setfill(' ') << setw(10) << "Петров" << setw(10) << "Василий" << setw(21) << "Кленовая 16" << setw(19) << "Санкт-Петербург" << endl
        << setw(10) << "Иванов" << setw(10) << "Сергей" << setw(21) << "Осиновая 3" << setw(19) << "Находка" << endl
        << setw(10) << "Сидоров" << setw(10) << "Иван" << setw(21) << "Березовая 21" << setw(19) << "Калининград" << endl;
    return 0;
}