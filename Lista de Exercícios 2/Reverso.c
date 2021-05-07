/* 
Escreva uma função, usando a linguagem de programação C, que receba um vetor de números reais e tenha como valor de retorno um novo vetor, alocado dinamicamente, com elementos do vetor original em ordem reversa. A função deve ter como valor de retorno o ponteiro do vetor alocado, seguindo o protótipo:

 

float* reverso(float *v, int n);

 

Faça uma função main para testar sua função. Na função main, não esqueça de liberar a memória alocada.

Entrada
Deve ser informado um valor inteiro N que representa a quantidade de elementos presente no vetor. Cada linha a seguir é um número real.

Saída
Um vetor com elementos do vetor original em ordem reversa
*/

#include <stdio.h>
#include <stdlib.h>

float* reverso(float *v, int n){
  float* temp = (float *) malloc(n * sizeof(float));
  int j=n;
  for(int i=0;i<n;i++){
      temp[i]= v[j-1];
      j--;
  }
  return temp;
}

int main(){
  int n;
  scanf("%d", &n);
  float* v = (float *) malloc(n * sizeof(float));
  for (int i=0;i<n;i++){
    scanf("%f", &v[i]);
  }
  v= reverso(v,n); 
  for (int i=0;i<n;i++){
    printf("%0.1f\n", v[i]);
  }
}