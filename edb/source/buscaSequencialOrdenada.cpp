
//valgrind --leak-check=full ./ex1
//g++ -o buscaSequencial -Wall -ansi -pedantic -O0 -g buscaSequencial3.cpp

#include <iostream>

using namespace std;


int busca_sequencial(int colecao[], int tamanho)
{
	int posicao = 0;
	do {

		if( colecao[posicao] <= colecao[++posicao]){
			continue;
		} else {
			return -1;
		}
		posicao++;
	} while(posicao < tamanho);
	return 1; //INSUCESSO
}

int main()
{
	int a[] = {13, 15, 15, 19, 21, 23}; //1
	int b[] = {13, 15, 127, 19, 21, 23};//-1
	int c[] = {13, 15, 17, 19, 21, 23}; //1
	int n = 6;

	cout << "busca_sequencial(a, n): " << busca_sequencial(a, n) << "\n" << endl;
	cout << "busca_sequencial(b, n): " << busca_sequencial(b, n) << "\n" << endl;
	cout << "busca_sequencial(c, n): " << busca_sequencial(c, n) << "\n" << endl;

	return 0;
}