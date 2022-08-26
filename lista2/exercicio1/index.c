#include <stdio.h>

/*
1. A imobiliária Imóbilis vende apenas terrenos retangulares. Faça um algoritmo para ler as
dimensões de um terreno e depois exibir a área do terreno.
*/

int main()
{
    float
        lado,
        comprimento,
        area;

    printf("Qual as dimensões do terreno? ");
    scanf("%f%f", &lado, &comprimento);

    area = lado * comprimento;

    printf("A área do terreno é igual a %.2fm².\n", area);

    return 0;
}