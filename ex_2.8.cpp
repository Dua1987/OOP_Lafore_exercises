#include <iostream>
#include <iomanip>         // ��� ������������� setw
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    long pop1 = 8425785, pop2 = 47, pop3 = 9761;
    cout << "�����" << setw(17)
        << "��������� " << endl << setfill('.')
        << "������" << setw(15) << pop1 << endl
        << "�����" << setw(16) << pop2 << endl
       << "���������" << setw(12) << pop3 << endl;
    return 0;
}