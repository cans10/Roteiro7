#include <iostream>
#include "Circulo.h"

using namespace std;

    Circulo::Circulo(){}

    Circulo::Circulo(string n, double r){
        setNome(n);
        setRaio(r);
    }

    void Circulo::setRaio(double r){
        raio = r;
    }

    double Circulo::getRaio(){
        return raio;
    }

    double Circulo::calcularArea(){
        return PI * getRaio() * getRaio();
    }
