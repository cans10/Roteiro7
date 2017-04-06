#include <iostream>
#include "Quadrado.h"
#include "Triangulo.h"
#include "Circulo.h"


using namespace std;

int main()
{
    Quadrado q1;
    q1.setNome("Quadrado 1");
    q1.setBase(4);

    Quadrado q2("Quadrado 2", 5);

    cout.precision(2);
    cout << fixed << "Area do " << q1.getNome() <<"  eh " << q1.calcularArea()<< ";" << endl;
    cout << fixed << "Area do " << q2.getNome() <<"  eh " << q2.calcularArea()<< ";" << endl;

    Triangulo t1;
    t1.setNome("Triangulo 1");
    t1.setBase(4);
    t1.setAltura(4);

    Triangulo t2("Triangulo 2", 5, 5);

    cout << fixed << "Area do " << t1.getNome() <<"  eh " << t1.calcularArea()<< ";" << endl;
    cout << fixed << "Area do " << t2.getNome() <<"  eh " << t2.calcularArea()<< ";" << endl;

    Circulo c1;
    c1.setNome("Circulo 1");
    c1.setRaio(4);

    Circulo c2("Circulo 2", 3);

     cout << fixed << "Area do " << c1.getNome() <<"  eh " << c1.calcularArea()<< ";" << endl;
     cout << fixed << "Area do " << c2.getNome() <<"  eh " << c2.calcularArea()<< ";" << endl;

    return 0;
}
