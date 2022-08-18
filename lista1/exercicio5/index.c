#include <stdio.h>

/*
5 – Algoritmo PA – Progressão Aritmética
Faça um programa que imprima os elementos de uma PA e o somatório da mesma dados :
primeiro termo , numero de termos e razão.
*/

int main()
{
    float
        firstNumber,
        ratio,
        numberOfTerms,
        numberArray[256] = {};
    int
        i;

    printf("Qual o primeiro termo da progressão aritmética? ");
    scanf("%f", &firstNumber);

    printf("Qual o número de termos da progressão aritmética? ");
    scanf("%f", &numberOfTerms);

    printf("Qual a razão da progressão aritmética? ");
    scanf("%f", &ratio);

    for (i = 0; i < numberOfTerms; i++)
    {
        if (i == 0)
            numberArray[i] = firstNumber;
        else
            numberArray[i] = numberArray[i - 1] + ratio;
    }

    for (i = 0; i < numberOfTerms; i++)
    {
        printf("%.0f\n", numberArray[i]);
    }

    return 0;
};