#ifndef __FRACAO_H__
#define __FRACAO_H__
#include <ostream>
class Fracao{
    private:
        float numerador;
        float denominador;
    public:
        Fracao();
        Fracao(float n, float d);
        Fracao(Fracao &f);
        float getNumerador();
        float getDenominador();
        void setNumerador(float n);
        void setDenominador(float d);
        Fracao operator+ (Fracao &t);
        float result();
};
#endif