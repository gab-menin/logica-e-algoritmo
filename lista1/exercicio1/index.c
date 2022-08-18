#include <stdio.h>

/*
1 - Algoritmo do Triangulo
Faça um algoritmo para ler a base e a altura de um triângulo. Em seguida, escreva a área do
mesmo. Área = (Base * Altura) / 2
*/

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
