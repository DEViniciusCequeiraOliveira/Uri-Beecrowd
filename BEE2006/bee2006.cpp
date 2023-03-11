#include <iostream>
#include <string>

using namespace std;

int main()
{
    char tipoCha;
    string respostas;
    int cont = 0;

    cin >> tipoCha;
    getline(cin, respostas);
    getline(cin, respostas);

    for (char &resposta : respostas)
    {
        if (resposta == tipoCha)
        {
            cont++;
        }
    }

    cout << cont << endl;

    return 0;
}