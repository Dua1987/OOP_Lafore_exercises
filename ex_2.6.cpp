#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float dollar;
	const float sterling = 1.487;
	const float franc = 0.172;
	const float mark = 0.584;
	const float yen = 0.00955;
	cout << "Enter the summ in dollars to be converted: ";
	cin >> dollar;
	cout << "\nThe pointed summ " << dollar << " will be: " << endl 
		<< dollar / sterling << setw(12) <<"sterling\n"
		<< dollar / franc << setw(12) << "franc\n"
		<< dollar / mark << setw(12) << "mark\n"
		<< dollar / yen << setw(12) << "yen\n";
	return 0;
}