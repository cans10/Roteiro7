#include <iostream>
#include "Consultor.h"

    Consultor::Consultor(){}

    Consultor::Consultor(string m, string n, float s){
            setMatricula(m);
            setNome(n);
            setSalario(s);
    }

    float Consultor::getSalario(){
        return Funcionario::getSalario() * 1.10;
    }

    float Consultor::getSalario(float p){
        return Funcionario::getSalario() * (1 + p/100);
    }
