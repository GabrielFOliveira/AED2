/*
Ordenação por bubble sort
Faça um programa em linguagem C que ira ler 5 números  para dentro de um vetor de inteiros e ordena-los de forma crescente. 

seu programa deverá ter o seguinte escopo:

void swap(int *n1, int *n2)

void bubbleSort(int *array, int n)

int main()

Entrada
5 números

Saída
o vetor ordenado

*/

#include <stdio.h>
#include <stdlib.h>

void swap(int *n1, int *n2){
  int aux;
  aux = *n1;
  *n1 = *n2;
  *n2 = aux;
  
}

void bubbleSort (int *vetor, int n) {
  for (int i = 1; i < n; i ++) {
    for (int j = 0 ; j <n-1; j++) {
      if (vetor[j] > vetor[j + 1]) {
        swap(&vetor[j], &vetor[j+1]);
      }
    }
  }
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