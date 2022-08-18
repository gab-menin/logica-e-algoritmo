#include <stdio.h>

/*
2 – Algoritmo Preço de Automóvel
O preço de um automóvel é calculado pela soma do preço de fábrica com o preço dos
impostos (45% do preço de fábrica) e a percentagem do revendedor (28% do preço de fábrica).
Faça um algoritmo que leia o nome do automóvel e o preço de fábrica e imprima o nome do
automóvel e o preço final.
*/

int main()
{
    char nomeCarro[256];
    float valorFabrica, valorImpostos, valorRevendedor, valorFinal;

    printf("Qual o nome do carro?");
    scanf("%s", &nomeCarro);

    printf("Qual o valor de fábrica do carro?");
    scanf("%f", &valorFabrica);

    valorImpostos = valorFabrica * 0.45;
    valorRevendedor = valorFabrica * 0.28;

    valorFinal = valorFabrica + valorImpostos + valorRevendedor;

    printf("Nome do carro: %s\n", nomeCarro);
    printf("Valor final do carro: R$ %.2f\n", valorFinal);

    return 0;
}