#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int invest;
    int year;
    float rate;
    float profit=1;
    cout << "������� ��������� �����: "; cin >> invest;
    cout << "������� ����� ���: "; cin >> year;
    cout << "������� ���������� ������: "; cin >> rate;
    for (int i = 0; i < year; i++)
    {
        profit = invest + (invest * (rate / 100));
    }
    cout << "����� "<<year<<" ��� �� �������� "<<profit<<" ������.";
    return 0;
}