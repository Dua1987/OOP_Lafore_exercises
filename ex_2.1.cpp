#include <iostream>
using namespace std;
#define CubicFoot 7.481
int main()
{
	float volume;
	int quantity;
	cout << "Please write the quantity of gallons to be converted: ";
	cin >> quantity;
	volume = quantity / CubicFoot;
	cout << "The volume of " << quantity << " gallons equals to " << volume << " ft3." << endl;
	return 0;
}