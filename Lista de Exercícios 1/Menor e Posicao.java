/*
Faça um programa que leia um valor N. Este N será o tamanho de um vetor X[N]. A seguir, leia cada um dos valores de X, encontre o menor elemento deste vetor e a sua posição dentro do vetor, mostrando esta informação.

Entrada
A primeira linha de entrada contem um único inteiro N (1 < N < 1000), indicando o número de elementos que deverão ser lidos em seguida para o vetor X[N] de inteiros. A segunda linha contém cada um dos N valores, separados por um espaço.

Saída
A primeira linha apresenta a mensagem “Menor valor:” seguida de um espaço e do menor valor lido na entrada. A segunda linha apresenta a mensagem “Posicao:” seguido de um espaço e da posição do vetor na qual se encontra o menor valor lido, lembrando que o vetor inicia na posição zero.
*/

import java.util.Scanner;
class Main {
  public static void main(String[] args) {
  Scanner ent= new Scanner(System.in);
  int v[]= new int[1000];
  int n, pos, menor;
  n=ent.nextInt();
  for(int i=0;i<n;i++){
    v[i]=ent.nextInt();
  }
  menor=v[0];
  pos=0;
  for(int i=1;i<n;i++){
    if(v[i]<menor){
      menor=v[i];
      pos=i;
    }
  }
  System.out.printf("Menor valor: %d\nPosicao: %d\n", menor, pos);

  }
}