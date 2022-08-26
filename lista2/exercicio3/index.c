#include <stdio.h>

/*
3. A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de
broas a cada dia. Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono
quer saber quanto arrecadou com a venda dos pães e broas (juntos), e quanto deve guardar
numa conta de poupança (10% do total arrecadado). Você foi contratado para fazer os cálculos
para o dono. Com base nestes fatos, faça um algoritmo para ler as quantidades de pães e de
broas, e depois calcular os dados solicitados.
*/

int main()
{
    int
        paesVendidos,
        broasVendidas;

    float
        valorFinal,
        valorPoupanca;

    printf("Quantos pães foram vendidos? ");
    scanf("%d", &paesVendidos);

    printf("Quantas broas foram vendidos? ");
    scanf("%d", &broasVendidas);

    valorFinal = (paesVendidos * 0.12) + (broasVendidas * 1.5);

    valorPoupanca = valorFinal * 0.10;

    printf("O proprietário deve guardar %.2f reais na conta poupança.\n", valorPoupanca);

    return 0;
}