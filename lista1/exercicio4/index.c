#include <stdio.h>

/*
4 – Algoritmo 3 Menores
Faça um algoritmo que leia 3 números inteiros e imprima o menor deles.
*/

void sort(float numberArray[], int sizeOfArray)
{
    int
        i,
        j;
    float temporaryNumber;

    for (i = 0; i < sizeOfArray - 1; i++)
    {
        for (j = 0; j < sizeOfArray - 1; j++)
        {
            if (numberArray[j] > numberArray[j + 1])
            {
                temporaryNumber = numberArray[j];
                numberArray[j] = numberArray[j + 1];
                numberArray[j + 1] = temporaryNumber;
            }
        }
    }

    printf("O menor número é: %.0f\n", numberArray[0]);
}

int main()
{
    float
        numberArray[256] = {};
    int
        i,
        numberOfRepeats;

    printf("Quantos números você deseja inserir? ");
    scanf("%d", &numberOfRepeats);

    for (i = 0; i < numberOfRepeats; i++)
    {
        printf("Digite o elemento número %d: ", i + 1);
        scanf("%f", &numberArray[i]);
    }

    int sizeOfArray = numberOfRepeats;

    sort(numberArray, sizeOfArray);

    return 0;
}