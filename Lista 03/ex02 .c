#include <stdio.h>
#include <math.h>

/*
 Faça um programa que receba a idade de uma pessoa e se idade menor que 30 aparece a mensagem 
 "Você é muito jovem".
  Caso idade maior que 30 anos, o programa não fará nada.  
*/



int main(){

int repeticao = 0;
float idade=0;


while (repeticao != 2)
{

printf("digite sua idade\n");
scanf("%f", &idade);

if (idade <= 30)
{
    printf(" Voce eh muito jovem\n");
}
else
{
    printf("\n\a");
}





 printf("Se quer refazer o teste digite 1,caso contrario digite 2\n");
scanf("%i", &repeticao);
fflush(stdin);



}
}