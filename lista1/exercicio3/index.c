#include <stdio.h>

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
