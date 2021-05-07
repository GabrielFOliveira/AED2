/*

Faça um algoritmo que leia várias linhas com quatro valores separados por espaço, correspondentes às coordenadas dos pontos P e Q e retorne a distância destes pares de pontos. A leitura dos dados será interrompida quando as quatro coordenadas forem iguais a zero.

Entrada
Uma sequências de quatro números separados por espaço(X1 Y1 X2 Y2). 

Saída
Para cada linha de pontos deve ser impresso a distância euclidiana entre os pontos. Deve-se limitar a 2 casas decimais de precisão para o número real.


Exemplos de Entrada	
5 5 3 3
3 1 -1 -3
0 0 0 0

Exemplos de Saída
2.83
5.66
0.00

*/

#include <stdio.h>
#include <math.h>

int main(void) {
        float x1,y1,x2,y2;
        do{
            scanf("%f",&x1);
            scanf("%f",&y1);
            scanf("%f",&x2);
            scanf("%f",&y2);
            double d= sqrt(pow(x1-x2,2)+pow(y1-y2,2));
            printf("%.2f\n", d);
        } while(x1!=0 && x2!=0 && y1!=0 && y2!=0);

  return 0;
}