#include <iostream> 
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int pounds;
    int shilling;
    int penny;
    float decpound;//����� � ���������� �������
    float decfranc;//���������� �����
    cout << "������� ����� ���������� ������: "; cin >> decpound;
    pounds = static_cast<int>(decpound);
    decfranc = decpound - pounds;
    shilling = decfranc * 20;
    penny = (((decfranc * 20) - shilling) * 12);
    cout << "������������� ����� � ������ ����� ������: \x9C"<<pounds<<"."<<shilling<<"."<<penny<<endl; //����������� ����� 9C � 16�� ����, ������ �������� ������� �� ���� ��� ���� ������ ���� �������
    return 0;//����� J3.10.2 if entered 3.51
}