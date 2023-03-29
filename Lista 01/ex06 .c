#include <stdio.h>
#include <math.h>

/*
Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste.
Calcular e escrever o valor do novo salário.

(Com base nessa previsão, o valor do salário mínimo, 
de acordo com o projeto de Paulo Paim, seria de R$ 1.380,60 em 2023. 
O valor é 4,5% superior aos R$ 1.320 que serão pagos a partir de maio.
 A proposta prevê outro critério de correção a partir de 2024.)
*/

#define REAJUSTEEMPORCEMTAGEM  0.045

int main(){

int repeticao = 0;
float salario,reajuste, reajusteTotal;


while (repeticao != 2)
{

printf("Digite o valor do seu salario atual\n");
scanf("%f", &salario);


reajuste = salario * REAJUSTEEMPORCEMTAGEM;

reajusteTotal = salario + reajuste;

printf("\no seu salario com um reajuste de 4,5%% vai para: %.4f\n", reajusteTotal);







printf("Se quer refazer o teste digite 1,caso contrario digite 2\n");
scanf("%i", &repeticao);




}
}   