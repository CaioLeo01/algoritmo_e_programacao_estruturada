#include <stdio.h>
#include <math.h>

/*
 
*/


int main(){

int repeticao = 0;
float num1,num2;


while (repeticao != 2)
{

printf("Me informe o valor 1 \n");
scanf("%f", &num1);
fflush(stdin);

printf("Me informe o valor 2 \n");
scanf("%f", &num2);
fflush(stdin);


if (num1 > num2)
{
    printf("o valor 1 eh maior que o valor 2\n");
}
else if (num2 > num1)
{
    printf("o valor 2 eh maior que o valor 1\n");
}
else if (num1 == num2)
{
    printf("o dois valores sao iguais\n");
}
else
{
    printf("valores invalidos\n");
}




























 printf("Se quer refazer o teste digite 1,caso contrario digite 2\n");
scanf("%i", &repeticao);
fflush(stdin);



}
}