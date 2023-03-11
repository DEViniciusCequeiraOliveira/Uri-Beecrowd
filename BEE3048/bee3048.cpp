#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int quantidadeDeSequencia;
    cin >> quantidadeDeSequencia;

    int seq = 0;
    int numAnterior;
    int num;

    for (int i = 0; i < quantidadeDeSequencia; i++)
    {

        cin >> num;
        
        if (numAnterior != num)
        {
            seq++;
        }

        numAnterior = num;
    }

    cout << seq << endl;
    return 0;
}
