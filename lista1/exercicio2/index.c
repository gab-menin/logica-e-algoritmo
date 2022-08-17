#include <stdio.h>

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