#include <iostream> 
#include <iomanip> 
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    float ftemp;
    float ctemp;
    cout << "������� \n\t1 ��� �������� ����� ������� � ����� ����������,\n\t2 ��� �������� ����� ���������� � ����� ������� \n";
    int choice;
    cin >> choice; cout << endl;
    switch (choice) {
    case 1:
        cout << "������� ����������� �� ����������: ";
        cin >> ftemp;
        cout << "�������� �� �������: ";
        ctemp = (ftemp - 32.0) * 5 / 9;
        cout << setprecision(3) << ctemp << endl;
        break;
    case 2:
        cout << "������� ����������� �� �������: ";
        cin >> ctemp;
        cout << "�������� �� ����������: ";
        ftemp = 9 / 5 * ctemp + 32.0;
        cout << setprecision(3) << ftemp << endl;
        break; 
    }
    

    return 0;
}