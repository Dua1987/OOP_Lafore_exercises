#include <iostream>      
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int ch1, ch2, zn1, zn2;
    char c;//��� ����� �����
    cout << "������� ��������� � ����������� ������ �����: ";
    cin >> ch1 >>c>> zn1;
    cout << "������� ��������� � ����������� ������ �����: ";
    cin >> ch2 >>c>> zn2;
    cout << "����� ����� " << (ch1 * zn2 + zn1 * ch2)<<"/"<< (zn1 * zn2);
    return 0;
}