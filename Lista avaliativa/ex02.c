/*Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no
plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles, mostrando 4 casas decimais
após a vírgula, segundo a fórmula:*/

#include <stdio.h>
#include <math.h>

float main()
{

    double x1, y1, x2, y2, distancia;

    printf("Digite o valor de x1 e y1\n");
    scanf("%lf %lf", &x1, &y1);
    printf("Digite o valor de x2 e y2\n");
    scanf("%lf %lf", &x2, &y2);

    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("%.4lf\n", distancia);
}