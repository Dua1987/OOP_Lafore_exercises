#include <iostream> 
#include <iomanip> // ��� setprecision()
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    float pound;
    float shilling;
    float penny;
    float decpound;
    cout << "������� ���������� ������: "; cin >> pound;
    cout << "\n������� ���������� ���������: "; cin >> shilling;
    cout << "\n������� ���������� ������: "; cin >> penny;
    decpound = ((pound*240)+(shilling * 12 + penny))/240;
    cout << "\n���������� ������: \x9C"<<setprecision(3)<<decpound<<endl; //����������� ����� 9C � 16�� ����, ������ �������� ������� �� ���� ��� ���� ������ ���� �������
    //<iomanip> ��� setprecision() ���������� ���������� ������ ����� �������
    return 0;//����� J5.1333
}