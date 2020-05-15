#include <iostream> 
#include <iomanip> 
#include <conio.h> 
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int pound1;
    int shilling1;
    int penny1;
    int pound2;
    int shilling2;
    int penny2;
    char answer;
    do {
        cout << "Введите первую сумму: J"; cin >> pound1 >>answer>> shilling1>>answer>>penny1;
        cout << "Введите вторую сумму: J"; cin >> pound2 >> answer >> shilling2 >> answer >> penny2;
        pound1 += pound2;
        shilling1 += shilling2;
        if (shilling1 >19)
        {
            shilling1 -= 20;
            pound1++;
        }
        penny1 += penny2;
        if (penny1 >11)
        { 
            penny1 -= 12;
            shilling1++; 
        }
        cout << "Всего: J" << pound1 <<'.'<<shilling1<<'.'<<penny1<< endl;
        cout << "Продолжить (y/n)?";
        cin >> answer;
    } while (answer != 'n');
    return 0;
}