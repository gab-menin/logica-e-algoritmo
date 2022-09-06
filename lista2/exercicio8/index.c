#include <stdio.h>

/*
8. Faça um algoritmo para ler três notas de um aluno em uma disciplina e imprimir a sua média
ponderada (as notas tem pesos respectivos de 1, 2 e 3).
*/

int main() {
    float
        n1,
        n2,
        n3,
        mediaPonderada;

    printf("Qual a nota 1? ");
    scanf("%f", &n1);

    printf("Qual a nota 2? ");
    scanf("%f", &n2);

    printf("Qual a nota 3? ");
    scanf("%f", &n3);

    mediaPonderada = ((n1 * 1) + (n2 * 2) + (n3 * 3)) / 6;

    printf("A média do aluno é igual a %.2f.\n", mediaPonderada);

    return 0;
}