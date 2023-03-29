#include <stdio.h>
#include <math.h>

/*
 Faça um algoritmo que leia a idade de uma pessoa expressa em anos,
meses e dias e escreva a idade dessa pessoa expressa apenas em dias.
Considerar ano com 365 dias e mês com 30 dias.
*/

#define ANOEMDIA  365

int main(){

int repeticao = 0;
float ano, mes, dia, conversaoDeAno, conversaoDeMes;
char formato;

while (repeticao != 2)
{

printf("em qual formato vai me falar a sua idade?\nA=Anos\nM=meses\nD=dias\nDigite:\n");

scanf("%s", &formato);




switch (formato)
{
case 'a':

    printf("me diga,quantos anos voce tem?\n");
    scanf("%f", &ano);
conversaoDeAno = ano * ANOEMDIA;

printf("A sua idade expressa em dias eh: %.0f", conversaoDeAno);

break;

case 'A':

    printf("me diga,quantos anos voce tem?\n");
    scanf("%f", &ano);
conversaoDeAno = ano * ANOEMDIA;

    printf("A sua idade expressa em dias eh: %.0f",conversaoDeAno);

break;


case 'm':

    printf("Me diga,qual sua idade em meses?\n");
    scanf("%f", &mes);

conversaoDeMes = ((mes * ANOEMDIA)/12);

    printf("A sua idade expressa em dias eh: %.0f", conversaoDeMes);

break;

case 'M':

    printf("Me diga,qual sua idade em meses?\n");
    scanf("%f", &mes);

conversaoDeMes = (mes * 30);

    printf("A sua idade expressa em dias eh: %.0f", conversaoDeMes);

break;

case 'd':

    printf("Me diga,qual sua idade em dias?\n"); 
    scanf("%f", &dia);

    printf("A sua idade expressa em dias eh: %.0f",dia);


break;

case 'D':

    printf("Me diga,qual sua idade em dias?\n"); 
    scanf("%f", &dia);

    printf("A sua idade expressa em dias eh: %.0f", dia);

break;


default:

    printf("nao te dei essa alternativa,tente novamente!!\n");

break;
}



printf("Se quer refazer o teste digite 1,caso contrario digite 2\n");
scanf("%i", &repeticao);



   
}







}    