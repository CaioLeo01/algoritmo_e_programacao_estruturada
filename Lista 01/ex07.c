#include <stdio.h>
#include <math.h>

/*
 O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos 
 (aplicados ao custo de fábrica). Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%,
  escrever um algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor.
*/

#define    DISTRIBUIDOR 0.28
#define    IMPOSTO   0.45

int main(){

int repeticao = 0;
float custoDeFabrica,calculo1,calculo2,calculo3;


while (repeticao != 2)
{

printf("Qual e o custo de fabrica do carro?\n");
scanf("%f", &custoDeFabrica);
fflush(stdin);

calculo1 = custoDeFabrica * DISTRIBUIDOR;
fflush(stdin);
calculo2 = custoDeFabrica * IMPOSTO;
fflush(stdin);
calculo3 = custoDeFabrica + calculo1 + calculo2;
fflush(stdin);

printf("\no valor de venda final para o consumidor eh de:%.2f\n", calculo3);
fflush(stdin);









    printf("Se quer refazer o teste digite 1,caso contrario digite 2\n");
scanf("%i", &repeticao);
fflush(stdin);

}
}
