#include "fracao.h"

Fracao::Fracao(){
    numerador = 0;
    denominador = 1;
}
Fracao::Fracao(float n, float d){
    numerador = n;
    denominador = d;
}
Fracao::Fracao(Fracao &f){
    numerador = f.getNumerador();
    denominador = f.getDenominador();
}
float Fracao::getNumerador(){
    return numerador;
};
void Fracao::setNumerador(float n){
    numerador = n;
}
float Fracao::getDenominador(){
    return denominador;
};
void Fracao::setDenominador(float d){
    denominador = d;
};
float Fracao::result(){
    return numerador/denominador;
}
Fracao Fracao::operator + (Fracao &f) {
    float h = numerador + f.getNumerador();
    float m = denominador + f.getDenominador();
    return Fracao(h, m);
}

