#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int year = 1990;
	cout << year << setw(9) << "135" << endl
	<< year+1 << setw(9) << "7290" << endl
	<< year+2<< setw(9) << "11600" << endl
	<< year+3<< setw(9) << "16200" << endl;
	return 0;
}