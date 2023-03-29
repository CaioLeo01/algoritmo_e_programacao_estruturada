/*
LISTA 1 - EX 3
Entrada:  largura, altura, m2
Enunciado: 
            Considere que o consumo de tinta é de 300 ml por metro quadrado e a quantidade de tinta por lata é de 2000 ml.
Saída: qtd_latas
*/

#include <stdio.h>

int main(){

    float litragem, largura, altura, area, lata=2000, consumo=300;
    int qtd_latas=0;
    
    // entrada largura
    printf("Informe a largura: ");
    scanf("%f",&largura);

    // entrada da altura
    printf("Informe a altura: ");
    scanf("%f",&altura);

    // calcular área
    area = largura * altura;

    printf("Tamanho area: %.1f m2\n",area);

    //litragem é float e qtd_latas é int (trabalha com a diferença do arredondamento)
    litragem = ((largura*altura)*300)/2000;
    qtd_latas = ((largura*altura)*300)/2000;

    if(litragem>qtd_latas){
        qtd_latas++;
    }

    printf("Quantidade de latas: %d ",qtd_latas);

    return 0;
}