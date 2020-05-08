#include <iostream>      
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int ch1, ch2, zn1, zn2;
    char c;//дл€ косой черты
    cout << "¬ведите числитель и знаменатель первой дроби: ";
    cin >> ch1 >>c>> zn1;
    cout << "¬ведите числитель и знаменатель второй дроби: ";
    cin >> ch2 >>c>> zn2;
    cout << "—умма равна " << (ch1 * zn2 + zn1 * ch2)<<"/"<< (zn1 * zn2);
    return 0;
}