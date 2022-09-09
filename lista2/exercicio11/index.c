#include <stdio.h>

/*
11. Uma fábrica controla o tempo de trabalho sem acidentes pela quantidade de dias. Faça um
algoritmo para converter este tempo em anos, meses e dias. Assume que cada mês possui
sempre 30 dias.
*/

int main() {
    int 
    diasSemAcidentes,
    anos,
    meses,
    dias;

    printf("Há quantos dias sem acidentes? ");
    scanf("%d", &diasSemAcidentes);

    anos = diasSemAcidentes / 365;

    meses = (diasSemAcidentes - anos * 365) / 30;

    dias = (diasSemAcidentes - (anos * 365) - (meses * 30));

    printf("Anos: %d\n", anos);
    printf("Meses: %d\n", meses);
    printf("Dias: %d\n", dias);

    return 0;
}