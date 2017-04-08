#include <iostream>
#include "Funcionario.h"

using namespace std;

Funcionario::Funcionario(){}

    Funcionario::Funcionario(string m, string n, float s){
        setMatricula(m);
        setNome(n);
        setSalario(s);
    }

    void Funcionario::setMatricula(string m){
        matricula = m;
    }

    void Funcionario::setNome(string n){
        nome = n;
    }

    void Funcionario::setSalario(float s){
        salario = s;
    }

    string Funcionario::getMatricula(){
        return matricula;
    }

    string Funcionario::getNome(){
        return nome;
    }

    float Funcionario::getSalario(){
        return salario;
    }
