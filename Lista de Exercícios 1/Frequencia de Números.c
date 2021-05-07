/* Neste problema sua tarefa será ler vários números e em seguida dizer quantas vezes cada número aparece na entrada de dados, ou seja, deve-se escrever cada um dos valores distintos que aparecem na entrada por ordem crescente de valor.

Entrada
A entrada contém apenas 1 caso de teste. A primeira linha de entrada contem um único inteiro N, que indica a quantidade de valores que serão lidos para X (1 ≤ X ≤ 2000) logo em seguida. Com certeza cada número não aparecerá mais do que 20 vezes na entrada de dados.

Saída
Imprima a saída de acordo com o exemplo fornecido abaixo, indicando quantas vezes cada um deles aparece na entrada por ordem crescente de valor.
*/

#include <stdio.h>

int main(void) {
    //vetor criado para receber os valores escritos
    int v[20000];
    //variavel que ira conter a quantidade de valores a serem lidos
    int q;
    //vetor que ira conter a quantidade de valores repedidos
    int n[2000];
    // zera todos os valores de n
    for (int i=0; i<2000;i++){
      n[i]=0;
    }
    // recebe a quantidade de valores a serem lidos
    scanf("%d", &q);
    // recebe o valores de v
    for(int i=0;i<q;i++){
      scanf("%d", &v[i]);
    }
    // compara os valores contidos no vetor com os numeros inteiros de 1 a 2000;
    for (int i=0;i<q;i++){
      for(int j=0;j<2000;j++){
        if(v[i]==j+1){
          n[j]++;
        }
      }  
    }
  //Printa todos os valores que foram digitados e a quantidade de vezes
  for (int i=0; i<2000;i++){
      if(n[i]!=0){
        printf("%d aparece %d vez(es) \n", i+1, n[i]);
      }
  }
    return 0;
}
