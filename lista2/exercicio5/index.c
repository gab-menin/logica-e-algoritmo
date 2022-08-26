#include <stdio.h>

/*
5. Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um algoritmo para
ler o preço do litro da gasolina e o valor do pagamento, e exibir quantos litros ele conseguiu
colocar no tanque.
*/

int main()
{
    float
        reais,
        valorLitroGasolina,
        litrosTanque;

    printf("Quantos reais você quer por de gasolina? ");
    scanf("%f", &reais);

    printf("Qual o valor do litro da gasolina? ");
    scanf("%f", &valorLitroGasolina);

    litrosTanque = reais / valorLitroGasolina;

    printf("Você conseguiu colocar %.2f litros de gasolina no tanque.\n", litrosTanque);

    return 0;
}