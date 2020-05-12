#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int number=1;
    while (number != 0) {
        unsigned long fact = 1;       // тип long дл€ результата
        cout << "¬ведите целое число: ";
        cin >> number; 
        if (number == 0)
            break;
        for (int j = number; j > 0; j--)     
        {
            fact *= j;
        }                    
        cout << "‘акториал числа равен " << fact << endl;
    } 
    return 0;
}