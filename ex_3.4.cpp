#include <iostream> 
#include <iomanip> 
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    char ch = 0;
    while (ch != 'n')
    {
        cout << "������� ������ �������, �������� � ������ �������: ";
        char sign;
        float a, b, result;
        cin >> a >> sign >> b; cout << endl;
        switch (sign)
        {
        case '+':
            result = a + b;
            cout << "��������� ����� " << setprecision(3) << result << endl;
            
            break;
        case '-':
            result = a - b;
            cout << "��������� ����� " << setprecision(3) << result << endl;
            break;
        case '*':
            result = a * b;
            cout << "��������� ����� " << setprecision(3) << result << endl;
            break;
        case '/':
            result = a / b;
            cout << "��������� ����� " << setprecision(3) << result << endl;
            break;
        }
        cout << "\n��������� ��� ���� �������� (y/n)? ";
        cin >> ch; cout << endl;
    }
    
    return 0;
}