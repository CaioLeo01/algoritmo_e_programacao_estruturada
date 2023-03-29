#include <stdio.h>
#include <math.h>

/*
 Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final deste aluno.
  Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5. 
  Fórmula para o cálculo da média final é:

((n1*2)+(n2*3)+(n3*5))/2+3+5
*/



int main(){

int repeticao = 0;
float n1,n2,n3,calculo01;

while (repeticao != 2)
{

printf("Qual foi o valor da sua primeira nota\n");
scanf("%f", &n1);
fflush(stdin);

printf("Qual foi o valor da sua segunda nota\n");
scanf("%f", &n2);
fflush(stdin);

printf("Qual foi o valor da sua terceira nota\n");
scanf("%f", &n3);
fflush(stdin);


calculo01 = (((n1*2)+(n2*3)+(n3*5))/2+3+5);

printf("sua nota final eh:\n%.2f\n", calculo01);

if (calculo01 >= 30)
{
    printf("Parabens,voce nao vai refazer essa serie\n");
}
else 
{
    printf("nao foi dessa vez jovem gafanhoto,tente refazer o ano e se esforcar mais para na proxima passar\n");
}






 printf("Se quer refazer o teste digite 1,caso contrario digite 2\n");
scanf("%i", &repeticao);
fflush(stdin);



}
}