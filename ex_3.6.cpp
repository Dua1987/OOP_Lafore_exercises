#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int number=1;
    while (number != 0) {
        unsigned long fact = 1;       // ��� long ��� ����������
        cout << "������� ����� �����: ";
        cin >> number; 
        if (number == 0)
            break;
        for (int j = number; j > 0; j--)     
        {
            fact *= j;
        }                    
        cout << "��������� ����� ����� " << fact << endl;
    } 
    return 0;
}