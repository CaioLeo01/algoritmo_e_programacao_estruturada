/*Elabore um programa que faça a leitura de vários números inteiros até que se digite
um número negativo. O programa tem de retornar o maior e o menor número lido*/
#include <stdio.h>

#include <stdlib.h>

int main()

{

    int num = 0, mai = -1, men= 0, n;

    do

    {

        printf("Digite um numero:\n");

        scanf("%d", &n);

        if (n > mai)

        {

            mai = n;
        }

        if (n < 0)

        {

            men = n;
        }

        

    } while (n >= 0);

    printf("\a\n\n\t\t\t\t-=-=-=-[ Maior numero digitado ]-=-=-=-\n\n\t\t\t\t\t\t%d\n\n\t\t\t\t-=-=-=-[ Menor numero digitado ]-=-=-=-\n\n\t\t\t\t\t\t%d\n\n\n", mai, men);

    return 0;
}