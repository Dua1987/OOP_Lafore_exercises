#include <iostream> 
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int number;
    cout << "¬ведите число: ";
    cin >> number; cout << endl;
    double result;
    int mult = 1;
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 10; j++, mult++)
        {
             result = (unsigned __int64) number * mult;//чтобы убрать Warning C26451: Arithmetic overflow
            cout << result << " ";
        }
        cout << "\n\n";
    }
    return 0;
}