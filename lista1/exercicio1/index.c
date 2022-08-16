#include <stdio.h>

int main()
{
    float base, altura, area;

    printf("Qual a base do triângulo?");
    scanf("%f", &base);

    printf("Qual a altura do triângulo?");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("A área do triângulo é igual a:  %f\n", area);

    return 0;
}