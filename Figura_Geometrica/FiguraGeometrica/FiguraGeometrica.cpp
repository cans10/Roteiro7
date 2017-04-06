#include <iostream>
#include "FiguraGeometrica.h"
using namespace std;

    void FiguraGeometrica::setNome (string n){
        nome = n;
    }

    string FiguraGeometrica::getNome(){
        return nome;
    }

    double FiguraGeometrica::calcularArea(){
        return 0;
    }
