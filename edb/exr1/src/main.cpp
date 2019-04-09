#include <iostream>
#include "fracao.h"
using namespace std;

int main(){
    Fracao f;
    f.setNumerador(10);
    f.setDenominador(5);
    Fracao g;
    g.setNumerador(15);
    g.setDenominador(5);
    cout << f.result() << endl;
    return 0;
}