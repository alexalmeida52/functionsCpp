//wget "dontpad.com/asubl.txt"; chmod a+rx asubl.txt; ./asubl.txt
#include <iostream>
#include <cstdlib>
using namespace std;

int busca_ordenada(int k, int colecao[], int tamanho)
{
    int posicao = 0;
    do
    {

        if (k == colecao[posicao])
            return posicao; // SUCESSO
        else if (k < colecao[posicao])
            return -1;
        posicao++;
    } while (posicao < tamanho);
    return -1;
}

int main()
{
    int num;
    cout << "Digite um número: ";
    cin >> num;
    int colecao[num];
    for (int i = 0; i < num; i++)
    {
        colecao[i] = rand() % 10;
        cout << "Keys: " << colecao[i] << endl;
    }
    int res = busca_ordenada(5, colecao, num);
    cout << "Key: " << res << endl;
    return 0;
}