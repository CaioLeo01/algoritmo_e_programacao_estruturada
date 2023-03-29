#include <stdio.h>
#include <math.h>

/*
 Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
  o número digitado ao quadrado e raiz quadrada do número digitado.
*/



int main(){

int repeticao = 0,num1;
float cal1,cal2;

while (repeticao != 2)
{

printf("Digite um numero par\n");
scanf("%d", &num1);

if (num1 % 2 == 0 )
{

cal1 = pow(num1,2);
cal2 = sqrt(num1); 

printf("a potencia do numero %d eh: %.2f\n", num1,cal1);
printf("a rais quadrada do numero %d eh: %.2f\n", num1,cal2);

}
else
{
    printf("o numero que voce digitou nao e positivo\n");
}





 printf("Se quer refazer o teste digite 1,caso contrario digite 2\n");
scanf("%i", &repeticao);
fflush(stdin);



}
}