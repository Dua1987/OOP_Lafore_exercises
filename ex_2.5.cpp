#include <iostream>
#include <CTYPE.H>
using namespace std;
int main()
{
	char letter;
	cout << "Enter the letter of Latin alphabet and it will be said whther it is written with lower or higher letter: ";
	cin >> letter;
	if (islower(letter))
		cout << "It is written with lower letter, the result of program is: " << islower(letter);//2 так как заканчивается на /0
	else
		cout << "It is written with higher letter, the result of program is: " << islower(letter);
	return 0;
}