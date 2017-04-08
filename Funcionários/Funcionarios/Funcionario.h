#ifndef FUNCIONARIO_H_INCLUDED
#define FUNCIONARIO_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;


class Funcionario{

private:
    string matricula;
    string nome;
    float salario;

public:

    Funcionario ();
    Funcionario(string m, string n, float s);
    void setMatricula(string m);
    void setNome(string n);
    void setSalario(float s);
    string getMatricula();
    string getNome();
    float getSalario();

};




#endif // FUNCIONARIO_H_INCLUDED
