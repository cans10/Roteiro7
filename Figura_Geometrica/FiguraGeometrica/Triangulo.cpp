#include <iostream>
#include "Triangulo.h"

using namespace std;

    Triangulo::Triangulo(){}

    Triangulo::Triangulo(string n, double b, double a){
        setNome(n);
        setBase(b);
        setAltura(a);
    }

    void Triangulo::setBase(double b){
        base = b;
    }

    void Triangulo::setAltura(double a){
        altura = a;
    }

    double Triangulo::getBase(){
        return base;
    }

    double Triangulo::getAltura(){
        return altura;
    }
    double Triangulo::calcularArea(){
        return getBase() * getAltura() / 2;
    }
