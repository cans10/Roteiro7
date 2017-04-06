#ifndef TRIANGULO_H_INCLUDED
#define TRIANGULO_H_INCLUDED
#include <string>
#include "FiguraGeometrica.h"

class Triangulo:public FiguraGeometrica{

private:
    double base;
    double altura;

public:
    Triangulo();
    Triangulo(string n, double b, double a);
    void setBase(double b);
    void setAltura(double a);
    double getBase();
    double getAltura();
    double calcularArea();
};
#endif // TRIANGULO_H_INCLUDED
