#include <iostream> 
#include <iomanip> 
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    cout << setiosflags(ios::left) << setw(10) << "�������" << setw(10) << "���" << setw(21) << "�����" << setw(19) << "�����" << endl
        << setfill('-') << setw(60) << "-" << endl
        << setfill(' ') << setw(10) << "������" << setw(10) << "�������" << setw(21) << "�������� 16" << setw(19) << "�����-���������" << endl
        << setw(10) << "������" << setw(10) << "������" << setw(21) << "�������� 3" << setw(19) << "�������" << endl
        << setw(10) << "�������" << setw(10) << "����" << setw(21) << "��������� 21" << setw(19) << "�����������" << endl;
    return 0;
}