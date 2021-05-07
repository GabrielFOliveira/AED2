Faça um algoritmo recursivo que computer a seguinte sequencia dado um valor n:

1 + 1 /2 + 1 /3 + 1 /4 + ... + 1 /N .

/*
OBS: a função deve ser chamada recursivo.

Entrada
n

Saída
resultado da soma
*/

#include <stdio.h>
float rec(float n, float soma){
    if(n>1){
        rec(n-1,soma+1/n);
    }
    else return soma;
}


float recursivo(float n){
    float soma=1;
    return rec(n,soma);
}

