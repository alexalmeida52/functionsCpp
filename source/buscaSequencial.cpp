#include <iostream>
#include <cstdlib>

int busca_sequencial(int k, int colecao[], int tamanho){
    int posicao = 0;
    do {
        if(k == colecao[posicao]){
            return posicao;
        }
        posicao = posicao + 1;
    } while (posicao < tamanho);
    return -1;
}

int main(){
    int c[] = {14, 16, 15, 13, 18, 17};
    int n = 6;
    busca_sequencial(13, c, n);
    busca_sequencial(17, c, n);
    busca_sequencial(12, c, n);
    busca_sequencial(20, c, n);
    return 0;
}