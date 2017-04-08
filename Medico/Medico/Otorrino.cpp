#include "Otorrino.h"

    Otorrino:: Otorrino(){}

    Otorrino:: Otorrino(string n, float a, float p, string nc){
        setNome(n);
        setAltura(a);
        setPeso(p);
        setNomeCurso(nc);
    }

    string  Otorrino::getProcedimento(){
        string retorno = "realiza atendimento as terca, quarta e quinta-feiras, de 09:00 as 15:00 horas";
        return retorno;
    }
