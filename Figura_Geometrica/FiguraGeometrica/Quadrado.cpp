#include <iostream>
#include "Quadrado.h"

using namespace std;

    Quadrado::Quadrado(){}

    Quadrado::Quadrado(string n, double b){
        setNome(n);
        setBase(b);
    }

    void Quadrado::setBase(double b){
        base = b;
    }

    double Quadrado::getBase(){
        return base;
    }

    double Quadrado::calcularArea(){
        return getBase() * getBase();
    }
