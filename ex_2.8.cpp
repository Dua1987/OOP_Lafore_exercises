#include <iostream>
#include <iomanip>         // для использования setw
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    long pop1 = 8425785, pop2 = 47, pop3 = 9761;
    cout << "Город" << setw(17)
        << "Население " << endl << setfill('.')
        << "Москва" << setw(15) << pop1 << endl
        << "Киров" << setw(16) << pop2 << endl
       << "Угрюмовка" << setw(12) << pop3 << endl;
    return 0;
}