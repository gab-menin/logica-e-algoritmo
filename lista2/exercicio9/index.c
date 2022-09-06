#include <stdio.h>

/*
9. Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma sendo
vendida respectivamente por 10, 12 e 15 reais. Construa um algoritmo em que o usuário
forneça a quantidade de camisetas pequenas, médias e grandes referentes a uma venda, e a
máquina informe quanto será o valor arrecadado.
*/

int main()
{
    int
        numeroDeCamisetasPequenas,
        numeroDeCamisetasMedias,
        numeroDeCamisetasGrandes,
        valorFinal;

    printf("Quantas camisetas pequenas serão compradas? ");
    scanf("%d", &numeroDeCamisetasPequenas);

    printf("Quantas camisetas medias serão compradas? ");
    scanf("%d", &numeroDeCamisetasMedias);

    printf("Quantas camisetas grandes serão compradas? ");
    scanf("%d", &numeroDeCamisetasGrandes);

    valorFinal = (numeroDeCamisetasPequenas * 10) + (numeroDeCamisetasMedias * 12) + (numeroDeCamisetasGrandes * 15);

    printf("O valor arrecadado será de R$%.2d.\n", valorFinal);

    return 0;
}