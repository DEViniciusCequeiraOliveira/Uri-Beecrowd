#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double notaA, notaB, notaC;

    cin >> notaA >> notaB >> notaC;

    double media = (notaA * 2 + notaB * 3 + notaC * 5) / 10;

    cout << "MEDIA = " << fixed  << setprecision(1) << media << "\n";

    return 0;
}