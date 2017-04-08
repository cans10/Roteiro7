#include <iostream>
#include "Cirurgiao.h"
#include "Oftalmologista.h"
#include "Otorrino.h"
#include "Ginecologista.h"

using namespace std;

int main()
{

    Cirurgiao m1 ("Carlos", 1.75f, 75.00f, "Cirurgiao");
    Oftalmologista m2 ("Rodolffo", 1.70f,  50.00f, "Oftalmologista");
    Otorrino m3 ("Zenilda", 1.65f, 80.00f, "Otorrinolaringologista");
    Ginecologista m4 ("Lis Bruna", 1.70f, 65.00f, "Ginecologista");

    cout.precision(2);
    cout << fixed << m1.getNome() << " tem " << m1.getAltura() << " m e " << m1.getPeso() << " kg, eh "
        << m1.getNomeCurso() << " e " << m1.getProcedimento() << ".\n" << endl;
    cout << fixed << m2.getNome() << " tem " << m2.getAltura() << " m e " << m2.getPeso() << " kg, eh "
        << m2.getNomeCurso() << " e " << m2.getProcedimento() << ".\n" << endl;
    cout << fixed << m3.getNome() << " tem " << m3.getAltura() << " m e " << m3.getPeso() << " kg, eh "
        << m3.getNomeCurso() << " e " << m3.getProcedimento() << ".\n" << endl;
    cout << fixed << m4.getNome() << " tem " << m4.getAltura() << " m e " << m4.getPeso() << " kg, eh "
        << m4.getNomeCurso() << " e " << m4.getProcedimento() << ".\n" << endl;

    return 0;
}
