#include <stdio.h>

/*
6. O restaurante a quilo Bem-Bão cobra R$12,00 por cada quilo de refeição. Escreva um
algoritmo que leia o peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar.
Assume que a balança já desconte o peso do prato.
*/

int main()
{
    float
        peso,
        valorFinal;
    
    printf("Qual o peso do prato do cliente? ");
    scanf("%f", &peso);

    valorFinal = peso * 12;

    printf("O valor a pagar é de R$%.2f\n", valorFinal);

    return 0;
}