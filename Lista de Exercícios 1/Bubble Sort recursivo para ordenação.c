/*
Faça um programa em linguagem C que ordene os elementos de entrada em ordem crescente. O algoritmo de ordenação deverá ser um bubble sorte recursivo e devera ser implementado através de um procedimento no programa.

OBS: o programa deverá ler 5 elementos para dentro de um vetor de inteiros

Escopo do programa:

void swap(int *n1, int *n2)

void bubbleSort(int *array, int n)

int main()

Entrada
5 elementos inteiros

Saída
elementos ordenados


*/

#include <stdio.h>
#include <stdlib.h>

void swap(int *n1, int *n2){
  int aux;
  aux = *n1;
  *n1 = *n2;
  *n2 = aux;
  
}

void bubbleSort(int *vetor, int n) {

  if(n==1)
    return;
  
  for (int j = 0 ; j <n-1; j++) {
    if (vetor[j] > vetor[j + 1]) {
      swap(&vetor[j], &vetor[j+1]);
    }
    
  }
 
    
  bubbleSort(vetor, n-1);
}

int main(void) {
 
  int *vetor = (int*)malloc(5*sizeof(int));

  for (int i= 0; i < 5; i ++) 
     scanf("%d",&vetor[i]);
  
  bubbleSort(vetor,5);
 
  for (int i= 0; i < 5; i ++) 
    printf("%d \n", vetor[i]);
  return 0;
  
}