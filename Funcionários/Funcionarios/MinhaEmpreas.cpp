#include <iostream>
#include "Funcionario.h"
#include "Consultor.h"

using namespace std;

int main()
{
    Funcionario f1 ("123", "Carlos Alberto", 2500.00f);
    Consultor c1 ("234", "Rodolffo Teles", 4000.00f);
    float aumento = 100;

    cout.precision(2);
    cout << endl;
    cout << fixed << "Salario de "<< f1.getNome() << " eh de R$ "<< f1.getSalario()<< ".\n" << endl;
    cout << fixed << "Salario de "<< c1.getNome() << " com 10% de aumento eh de R$ "<< c1.getSalario() << ".\n" << endl;
    cout << fixed << "Salario de "<< c1.getNome() << " com "<< aumento << " de aumento eh de R$ "<< c1.getSalario(aumento) << ".\n" << endl;

    return 0;
}
