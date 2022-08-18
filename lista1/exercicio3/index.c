#include <stdio.h>

/*
3 – Algoritmo Media Valor
Dado uma série de 05 valores inteiros de temperatura, leia este 5 valores e calcule a média
destes, e em seguida apresente esta média e caso esta seja maior e igual que 30 graus
escreva “temperatura acima da média, calor”, caso esta média seja inferior ou igual a 15 graus
“temperatura a baixo da média, frio “ e se esta estiver no intervalo entre estes dois valores,
“temperatura mediana, temperatura agradável”
*/

int main()
{
    float
        temperatureArray[5] = {},
        sum = 0,
        average,
        sizeOfArray;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Qual a temperatura número %.0d: ", i + 1);
        scanf("%f", &temperatureArray[i]);
    };

    for (i = 0; i < 5; i++)
    {
        sum += temperatureArray[i];
    };

    sizeOfArray = sizeof(temperatureArray) / sizeof(temperatureArray[0]);

    average = sum / sizeOfArray;

    printf("A média das temperaturas é igual a %.2f°C.\n", average);

    if (average >= 30)
        printf("Temperatura acima da média, calor.\n");
    else if (average <= 15)
        printf("Temperatura a baixo da média, frio.\n");
    else
        printf("Temperatura mediana, temperatura agradável.\n");

    return 0;
};
