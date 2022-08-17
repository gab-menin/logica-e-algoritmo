#include <stdio.h>

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
    float numberArray[3] = {};
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Digite o elemento número %d: ", i + 1);
        scanf("%f", &numberArray[i]);
    }

    int sizeOfArray = sizeof(numberArray) / sizeof(numberArray[0]);

    sort(numberArray, sizeOfArray);

    return 0;
}