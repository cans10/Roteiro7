#include <iostream>
#include "MinhaEmpresa.h"


    void MinhaEmpresa::setNomeEmpresa(string n){
        nomeEmpresa = n;
    }

    string MinhaEmpresa::getNomeEmpresa(){
        return nomeEmpresa;
    }

     float MinhaEmpresa::getSalario(){
            return salario * 1.10;
    }

    float MinhaEmpresa::getSalario(float p){
            return salario * (1 + p/100);
    }
