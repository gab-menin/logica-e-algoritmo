#include <stdio.h>

/*
4. Escreva um algoritmo para ler o nome e a idade de uma pessoa, e exibir quantos dias de
vida ela possui. Considere sempre anos completos, e que um ano possui 365 dias. Ex: uma
pessoa com 19 anos possui 6935 dias de vida; veja um exemplo de saída: MARIA, VOCÊ JÁ
VIVEU 6935 DIAS.
*/

int main()
{
    char nome[256];
    int
        idade,
        diasDeVida;

    printf("Qual o seu nome? ");
    scanf("%s", &nome);

    printf("Qual a sua idade? ");
    scanf("%d", &idade);

    diasDeVida = idade * 365;

    printf("%s, você já viveu %d dias.\n", nome, diasDeVida);

    return 0;
}