#include <stdio.h>

/*
2. Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar todos os
cavalos comprados para um haras.
*/

int main() {
    int
    cavalos,
    ferraduras;

    printf("Quantos cavalos foram comprados? ");
    scanf("%d", &cavalos);

    ferraduras = cavalos * 4;

    printf("O número de ferraduras necessárias é igual a %d.\n", ferraduras);

    return 0;
}