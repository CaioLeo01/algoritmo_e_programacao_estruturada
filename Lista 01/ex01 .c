#include <stdio.h>
#include <math.h>

/*
 
*/



int main(){

int repeticao = 0;
float mercadoria1=0,frete=0,despesas=0,valorDeVenda=0,totalDosTres=0,lucro=0;

while (repeticao != 2)
{

printf("Digite o custo da sua mercadoria\n");
scanf("%f", &mercadoria1);
fflush(stdin);

printf("Digite o custo do frete?\n");
scanf("%f", &frete);
fflush(stdin);

printf("quanto e as despesas eventuais?\n");
scanf("%f", &despesas);
fflush(stdin);

totalDosTres = mercadoria1 + frete + despesas;

printf("Qual valor de venda desse produto?\n");
scanf("%f", &valorDeVenda);

lucro = ((valorDeVenda - totalDosTres)/totalDosTres )*100;

printf("a porcentagem de lucro eh %.2f%%\n", lucro);





 printf("Se quer refazer o teste digite 1,caso contrario digite 2\n");
scanf("%i", &repeticao);
fflush(stdin);

return 0;

}
}