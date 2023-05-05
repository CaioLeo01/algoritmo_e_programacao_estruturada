#include <stdio.h>

int main() {
    int n, i;
    int fib[100];  // definimos um array para armazenar os termos da sequência

    printf("Digite um numero inteiro maior ou igual a zero: ");
    scanf("%d", &n);

    // inicializamos os primeiros dois termos da sequência
    fib[0] = 0;
    fib[1] = 1;

    // calculamos os próximos termos da sequência usando um loop
    for (i = 2; i <= n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    // exibimos o enésimo termo da sequência
    printf("O %d-esimo termo da sequencia de Fibonacci: %d", n, fib[n]);

    return 0;
}
