#include <iostream>

using namespace std;

int main()
{
    int nota;
    cin >> nota;

    if (nota >= 86)
    {
        cout << "A" << endl;
    }
    else if (nota >= 61)
    {
        cout << "B" << endl;
    }
    else if (nota >= 36)
    {
        cout << "C" << endl;
    }
    else if (nota >= 1)
    {
        cout << "D" << endl;
    }
    else if (nota == 0)
    {
        cout << "E" << endl;
    }

    return 0;
}