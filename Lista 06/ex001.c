/*Elabore um programa que receba um nome completo por exemplo 
"Joaquim Pedro Alves" e retorne configurado para uma referência conforme apresentado abaixo:
ALVES J. P.*/




#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main () {


int i = 0,ultimoEspaco=0,PrimeiroEspaco=0, j=0, k;
char nome[100],nome_formatado[50];

printf("Digite seu nome\n");
scanf("%[^\n]s", &nome);

for ( i = 0; i < strlen(nome); i++)
{
    nome[i] = toupper(nome[i]);
   
}

printf("%s \n", nome);

for ( i = 0; i < strlen(nome); i++)
{
    if (nome[i]== ' ')
    {
        ultimoEspaco = i;
    }
}
printf("[i] do ultimo espaco %d\n", ultimoEspaco);

for ( i = ultimoEspaco + 1; i < strlen(nome); i++)
{
    nome_formatado[j] =  nome[i]; 
    j++;

}

printf("%s ", nome_formatado);

// k usado para local onde adicionar o espaço

k = strlen(nome_formatado);
printf("[I] onde adicionar o primeiro espaco: %d \n");
nome_formatado[k]= ' ';
nome_formatado[k+1]= nome[0];
nome_formatado[k+2] = '.';

printf("%s \n", nome_formatado);


for ( i = strlen(nome)-1; i >= 0; i--)
{
    if (nome[i] == ' ')
    {
        PrimeiroEspaco = i;
    }
    
}


for ( i = PrimeiroEspaco; i < ultimoEspaco; i++)
{
   if (nome[i] == ' ')
    {

        
        printf("%c\t",nome[i+1]);
    }
    

}





















return 0;

}