#ifndef FIGURAGEOMETRICA_H_INCLUDED
#define FIGURAGEOMETRICA_H_INCLUDED
#include <string>
#include <iostream>

using namespace std;

class FiguraGeometrica {

    private:
        string nome;

    public:
        void setNome (string n);
        string getNome();
        double calcularArea();
};

#endif // FIGURAGEOMETRICA_H_INCLUDED
