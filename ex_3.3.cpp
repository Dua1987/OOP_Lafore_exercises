#include <iostream> 
#include <conio.h> 
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    cout << "������� �����: ";
    char chislo;
    long result=0;
    while ((chislo=_getche()) != '\r')
        result = result*10+chislo-'0';// ��� ������� 48 ��� ��������� �� ���� ������� �����
    cout <<"�� ����� �����: "<< result<<endl;
    return 0;
}