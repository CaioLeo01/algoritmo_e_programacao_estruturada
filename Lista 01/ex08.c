#include <stdio.h>
#include <math.h>

/*
Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês,
mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. 
Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas,
o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.
*/




int main(){

int repeticao = 0,quantidadeDeCarros;
float salario,comissaofixa,cincoPorcento,valordaVenda,valortotal,salariototal;


while (repeticao != 2)
{

printf("Qual seu salario fixo?\n");
scanf("%f", &salario);
fflush(stdin);

printf("Quantos carros voce vendeu?\n");
scanf("%d", &quantidadeDeCarros);
fflush(stdin);

printf("Qual sua comissao fixa para cada carro vendido?\n");
scanf("%f", &comissaofixa);
fflush(stdin);

printf("Qual o valor do carro que voce vendeu?\n");
scanf("%f", &valordaVenda);
fflush(stdin);

cincoPorcento = (0.05 * valordaVenda) * quantidadeDeCarros;

valortotal = quantidadeDeCarros * valordaVenda;

salariototal = cincoPorcento + salario;

printf(" voce vendeu %.2f\n", valortotal);

printf("seu salario com comisao eh de:%.2f\n", salariototal);






























 printf("Se quer refazer o teste digite 1,caso contrario digite 2\n");
scanf("%i", &repeticao);
fflush(stdin);

return 0;

}
}