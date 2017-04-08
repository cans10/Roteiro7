#ifndef MINHAEMPRESA_H_INCLUDED
#define MINHAEMPRESA_H_INCLUDED

#include <iostream>

using namespace std::

class MinhaEmpresa:public Funcionario {

private:
    string nomeEmpresa;

public:
    void setNomeEmpresa(string n);
    string getNomeEmpresa();
    double getSalario();
    double getSalario(float porcentagem);

};

#endif // MINHAEMPRESA_H_INCLUDED
