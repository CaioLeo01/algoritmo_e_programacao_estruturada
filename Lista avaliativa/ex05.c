/**/
#include <stdio.h>

int main()

{

    int n, i;

    printf("Digite um numero: \n");

    scanf("%d", &n);

    printf("Seus divisores sao:\n");

    for (i = 1; i <= n; i++)
    {

        if (n % i == 0)

            printf(" %d\n", i);
    }

    return 0;
}