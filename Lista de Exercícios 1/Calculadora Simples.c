/*
Faça um algoritmo para ler dois inteiros (variáveis A e B) e efetuar as operações de adição, subtração, multiplicação e divisão de A por B apresentando ao final os quatro resultados obtidos.

Entrada
A entrada contém 2 valores inteiros.

Saída
Imprimir a operação e o resultado da operação para cada operação a ser executada. Cuide para que tenha um espaço antes e depois do sinal de igualdade, conforme o exemplo abaixo e  não esqueça de imprimir o fim de linha após o resultado. Para casos em que o resultado seja real, imprima com 2 casas decimais.
*/

#include <stdio.h>

int main(void) {
    int n1=0;
    int n2=0;
    scanf("%d",&n1);
    scanf("%d",&n2);
    printf("SOMA = %d\n", n1+n2);
    printf("SUBTRACAO = %d\n", n1-n2);
    printf("MULTIPLICACAO = %d\n", n1*n2);
    if (n2==0){
        printf("DIVISAO = INDETERMINADO\n");
    }
    else{
        float result=(float)n1/(float)n2;
        printf("DIVISAO %.2f\n", result);
    }
    return 0;
}
