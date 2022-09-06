#include <stdio.h>
#include <math.h>

/*
10. Construa um algoritmo para calcular a distância entre dois pontos do plano cartesiano.
Cada ponto é um par ordenado (x,y).
*/

int main()
{
    float
        x1,
        y1,
        x2,
        y2,
        distanciaEntreDoisPontos;

    printf("Qual o valor de x1? ");
    scanf("%f", &x1);

    printf("Qual o valor de y1? ");
    scanf("%f", &y1);

    printf("Qual o valor de x2? ");
    scanf("%f", &x2);

    printf("Qual o valor de y2? ");
    scanf("%f", &y2);

    distanciaEntreDoisPontos = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distância entre dois é igual a %f.\n", distanciaEntreDoisPontos);

    return 0;
}