#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   
    double valorA;
    double valorB;

    cin >> valorA;
    cin >> valorB;

    double media = (valorA * 3.5 + valorB * 7.5) / 11;

    cout << "MEDIA = " << fixed << setprecision(5) << media << "\n";

    system("pause");    
    return 0;
}