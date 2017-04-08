#ifndef CONSULTOR_H_INCLUDED
#define CONSULTOR_H_INCLUDED

#include <iostream>
#include "Funcionario.h"

using namespace std;

class Consultor:public Funcionario {

public:
    Consultor();
    Consultor(string m, string n, float s);
    float getSalario();
    float getSalario(float porcentagem);
};

#endif // CONSULTOR_H_INCLUDED
