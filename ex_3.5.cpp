#include <iostream> 
#include <iomanip> 
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int H = 39;
    for (int i = H; i >=0; i-=2)
    {
        for (int j = 0; j <H+1; j++)
        {        
            cout <<(j<i?' ':'x');
        }
        cout << endl;
    }
    return 0;
}