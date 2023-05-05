/*Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do
produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).
Apresente o resultado da seguinte forma:
DIFERENCA = (“valor de A” * “valor de B” - ““valor de C” * ““valor de D”)
DIFERENCA = (“valor de DIFERENCA”)8?*/

#include <stdio.h>


int main (){


int valores[4],i=0,Diferanca_1,Diferanca_2,x,z,v;

for ( i = 0; i < 4; i++)
{
    printf("Digiteo valor %i\n", i );
    scanf("%d", &valores[i]);
}

x = valores[0] * valores[1];
z = valores[2] * valores[3];
v = x - z;


printf("A = %d * B = %d - C = %d * D = %d\n", valores[0],valores[1],valores[2],valores[3]);
printf("Diferenca = %d", v);












}