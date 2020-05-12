#include <iostream> 
#include <iomanip> 
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    char ch = 0;
    while (ch != 'n')
    {
        cout << "Введите первый операнд, операцию и второй операнд: ";
        char sign;
        float a, b, result;
        cin >> a >> sign >> b; cout << endl;
        switch (sign)
        {
        case '+':
            result = a + b;
            cout << "Результат равен " << setprecision(3) << result << endl;
            
            break;
        case '-':
            result = a - b;
            cout << "Результат равен " << setprecision(3) << result << endl;
            break;
        case '*':
            result = a * b;
            cout << "Результат равен " << setprecision(3) << result << endl;
            break;
        case '/':
            result = a / b;
            cout << "Результат равен " << setprecision(3) << result << endl;
            break;
        }
        cout << "\nВыполнить еще одну операцию (y/n)? ";
        cin >> ch; cout << endl;
    }
    
    return 0;
}