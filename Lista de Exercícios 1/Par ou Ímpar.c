/*
Escreva um programa que leia um número inteiro e mostre uma mensagem indicando se este número é par ou ímpar e se é positivo ou negativo. Considere que o número 0 seja par e neutro

Entrada
Um número inteiro.

Saída
Imprimir se a palavra PAR ou IMPAR, seguido de POSITIVO ou NEGATIVO
*/

#include <stdio.h>

int main(void) {
    int p=0;
    int n=0;
    int numero=0;
    scanf("%d",&numero);
    if(numero%2==0){
        printf("PAR");
    }
    else{
        printf("IMPAR");
    }
    if(numero>0){
        printf(" e POSITIVO");
    }
    else if(numero<0){
        printf(" e NEGATIVO");
    }
    else{
        printf(" e NEUTRO");
    }
    return 0;
}
