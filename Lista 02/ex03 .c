#include <stdio.h>
#include <math.h>

/*
 Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar.
*/



int main(){

int repeticao = 0,num1 = 0;


while (repeticao != 2)
{

printf("Me informe o valor de um numero inteiro e vou te retornar se e par ou impar \n");
scanf("%d", &num1);
fflush(stdin);



if (num1 % 2 == 0)
{
    printf("o numero %d eh par\n", num1);
}
else if (num1 % 2 != 0)
{
    printf("o numero %d e impar\n", num1);
}
else
{
    printf("valor invalido\n");
}









 printf("Se quer refazer o teste digite 1,caso contrario digite 2\n");
scanf("%i", &repeticao);
fflush(stdin);



}
}