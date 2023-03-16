#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int qntLinhas;

    cin >> qntLinhas;

    for (int i = 1; i <= qntLinhas; i++)
    {
        cout << i << " " << pow(i, 2) << " " << pow(i, 3) << endl;
    }

    return 0;
}