#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> split(string texto)
{
    string palavra = "";

    texto = texto + " ";

    vector<int> palavras;
    for (char letra : texto)
    {
        palavra = palavra + letra;
        if (letra == ' ')
        {
            palavras.push_back(stoi(palavra));
            palavra = "";
        }
    }
    return palavras;
}

int main()
{
    int qntIntervalos;
    string resposta;
    int distanciaTotalPecorrida = 0;

    cin >> qntIntervalos;
    getline(cin, resposta);
    
    for (int i = 0; i < qntIntervalos; i++)
    {
        getline(cin, resposta);
        vector<int> respostas = split(resposta);
        distanciaTotalPecorrida = distanciaTotalPecorrida + (respostas[0] * respostas[1]);
    }

    cout << distanciaTotalPecorrida << endl;

    return 0;
}
