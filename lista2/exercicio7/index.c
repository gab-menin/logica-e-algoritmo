#include <stdio.h>

/*
7. Entrar com o dia e o mês de uma data e informar quantos dias se passaram desde o início do
ano. Esqueça a questão dos anos bissextos e considere sempre que um mês possui 30 dias.
*/

int main()
{
    int
        dia,
        mes,
        quantosDiasSePassaram;

    printf("Que dia é hoje? ");
    scanf("%d", &dia);

    printf("Em que mês estamos? ");
    scanf("%d", &mes);

    if (mes == 01){
        quantosDiasSePassaram = dia;
    }
    else {
        quantosDiasSePassaram = dia + ((mes - 1) * 30);
    }

    printf("Se passaram %d dias.\n", quantosDiasSePassaram);

    return 0;
}