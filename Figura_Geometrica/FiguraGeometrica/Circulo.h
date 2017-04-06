#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED
#include <string>
#include "FiguraGeometrica.h"

class Circulo:public FiguraGeometrica{

private:
    double raio;
    double const PI = 3.1416d;

public:
    Circulo();
    Circulo(string n, double b);
    void setRaio(double r);
    double getRaio();
    double calcularArea();
};

#endif // CIRCULO_H_INCLUDED
