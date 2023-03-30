#include <stdio.h>
#include <math.h>

/*
 Programa que calcule a média de 5 notas de um aluno. 
*/



int main(){

int repeticao = 0;

float media,num1,num2,num3,num4,num5;

while (repeticao != 2)
{

printf("Digite a nota do priemiro aluno\n");
scanf("%f", &num1);
fflush(stdin);

printf("Digite a nota do segundo aluno\n");
scanf("%f", &num2);
fflush(stdin);

printf("Digite a nota do terceiro aluno\n");
scanf("%f", &num3);
fflush(stdin);

printf("Digite a nota do quarto aluno\n");
scanf("%f", &num4);
fflush(stdin);

printf("Digite a nota do quinto aluno\n");
scanf("%f", &num5);
fflush(stdin);


media = (num1 + num2 + num3 + num4 + num5)/ 5;



printf("A media dos cinco alunos eh:\n %.2f\n", media);


 printf("Se quer refazer o teste digite 1,caso contrario digite 2\n");
scanf("%i", &repeticao);
fflush(stdin);



}
}