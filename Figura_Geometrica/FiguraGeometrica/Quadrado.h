#ifndef QUADRADO_H_INCLUDED
#define QUADRADO_H_INCLUDED
#include <string>
#include "FiguraGeometrica.h"

class Quadrado:public FiguraGeometrica{

private:
    double base;

public:
    Quadrado();
    Quadrado(string n, double b);
    void setBase(double b);
    double getBase();
    double calcularArea();
};



#endif // QUADRADO_H_INCLUDED
