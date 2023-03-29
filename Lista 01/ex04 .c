#include <stdio.h>
#include <math.h>

/*
Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), 
calcular e escrever a área do retângulo. 
*/



int main(){

float area, base, altura;


printf("Digite qual a base do seu retangulo!\n");
scanf("%f", &base);

printf("Digite qual a altura do seu retangulo!\n");
scanf("%f", &altura);


area= base * altura;

printf("A area do seu retangulo e de %.2f", area);










}