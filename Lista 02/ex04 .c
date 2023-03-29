#include <stdio.h>
#include <math.h>

/*
 Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. 
 Se a prestação, for maior que 20% do salário, imprima: “Empréstimo não concedido.”, 
 caso contrário, imprima: “Empréstimo concedido.”
*/

#define    VINTEPORCENTO 0.20


int main(){

int repeticao = 0;
float salario,cal1,num2;


while (repeticao != 2)
{

printf("Me informe o valor do seu salario\n");
scanf("%f", &salario);
fflush(stdin);

printf("Me informe o valor da prestacao do seu emprestimo\n");
scanf("%f", &num2);
fflush(stdin);

cal1 = salario  * VINTEPORCENTO;


if (num2 > cal1)
{
     printf("emprestimo nao concedido\n");
}
else
{
    printf("emprestimo concedido\n");
}






















 printf("Se quer refazer o teste digite 1,caso contrario digite 2\n");
scanf("%i", &repeticao);
fflush(stdin);

return 0;


}
}