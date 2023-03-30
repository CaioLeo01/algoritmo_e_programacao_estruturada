#include <stdio.h>
#include <math.h>

/*
 Faça um programa que entra com a idade de uma pessoa e se idade maior que 70 anos,
aparece a mensagem "Novos 50".
Se idade maior que 21 anos, Adulto. Se idade menor que 21 anos, Jovem. 
 
*/



int main(){

int repeticao = 0,idade;

while (repeticao != 2)
{

printf("Digite sua idade\n");
scanf("%i", &idade);
fflush(stdin);

if (idade >= 70)
{
    printf("Novo 50\n");
}
if (idade >= 21)
{
    if (idade < 70)
    {
        printf("Adulto\n");
    }
    else
    {
        
    }
    
}
else
{
    printf("jovem\n");
}





 printf("Se quer refazer o teste digite 1,caso contrario digite 2\n");
scanf("%i", &repeticao);
fflush(stdin);



}
}