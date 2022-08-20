#include <stdio.h>

/*
Construa um algoritmo que calcule o salário de um colaborador
pelo valor da hora/trabalho e quantidade de horas trabalhadas.
Lembrar o colaborador possui um salário bruto e um líquido.
Salario Bruto= hora/trabalho * horas trabalhadas
Salario Líquido = Salário bruto - INSS - IR
INSS:
Faixa de salário	                                 Alíquota Aplicada
Até um salário-mínimo (R$ 1.212,00 em 2022)	         7,5%
De R$ 1.212,01 a R$ 2.427,35	                     9%
De R$ 2.427,36 a R$ 3.641,03	                     12%
De R$ 3.641,04 a R$ 7.087,22 (Teto do INSS em 2022)	 14%

IR:
Base de cálculo	            Alíquota	   Dedução
de 0,00 até 1.903,98	    isento	       0,00
de 1.903,99 até 2.826,65	7,50%	       142,80
de 2.826,66 até 3.751,05	15,00%	       354,80
de 3.751,06 até 4.664,68	22,50%	       636,13
a partir de 4.664,68	    27,50%	       869,36
*/



int main()
{
    char nomeColaborador[256];

    float
        valorHora,
        horasTrabalhadas,
        salarioBruto,
        salarioBrutoMenosInss,
        salarioFinal,
        inss,
        impostoRenda;

    printf("Qual o nome do colaborador? ");
    scanf("%s", &nomeColaborador);

    printf("Qual o valor hora do colaborador? ");
    scanf("%f", &valorHora);

    printf("Quantas horas o colaborador trabalhou? ");
    scanf("%f", &horasTrabalhadas);

    salarioBruto = valorHora * horasTrabalhadas;

    if (salarioBruto <= 1212)
        salarioBrutoMenosInss = salarioBruto - (salarioBruto * 0.075);
    else if (salarioBruto > 1212 && salarioBruto <= 2427.35)
        salarioBrutoMenosInss = salarioBruto - (salarioBruto * 0.09);
    else if (salarioBruto > 2427.35 && salarioBruto <= 3641.03)
        salarioBrutoMenosInss = salarioBruto - (salarioBruto * 0.12);
    else
        salarioBrutoMenosInss = salarioBruto - (salarioBruto * 0.14);

    if (salarioBruto <= 1903.98)
        salarioFinal = salarioBrutoMenosInss;
    else if (salarioBruto > 1903.98 && salarioBruto <= 2826.65)
        salarioFinal = salarioBrutoMenosInss - 142.80;
    else if (salarioBruto > 2826.65 && salarioBruto <= 3751.05)
        salarioFinal = salarioBrutoMenosInss - 354.80;
    else if (salarioBruto > 3751.05 && salarioBruto <= 4664.68)
        salarioFinal = salarioBrutoMenosInss - 636.13;
    else
        salarioFinal = salarioBrutoMenosInss - 869.36;

    printf("O salário líquido do colaborador %s é R$%.2f.\n", nomeColaborador, salarioFinal);

    return 0;
}