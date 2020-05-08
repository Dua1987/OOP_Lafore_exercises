#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << "Enter the tempreture in Celsius degree: ";
	float ctemp;
	cin >> ctemp;
	float ftemp = (ctemp * 9 / 5) + 32;
	cout << "The pointed degree in Fahregeit means "<<ftemp;
	return 0;
}