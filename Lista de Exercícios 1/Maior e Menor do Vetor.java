/*
Faça um programa que receba uma seqüência de números inteiros e retorne o maior e o menor número da seqüência. A quantidade de números n é fornecida pelo usuário.

Entrada
Deve ser informado um valor inteiro N (N > 0) que representa a quantidade de elementos presente no vetor. Cada linha a seguir é um inteiro.

Saída
Imprima a mensagem "MAIOR = " (palavra MAIOR maiúscula) seguido pelo valor do maior número e na próxima linha imprima a mensagem "MENOR= " (palavra MENOR maiúscula) seguido pelo valor do menor número, conforme o exemplo abaixo e  não esqueça de imprimir o fim de linha após o resultado.
*/

import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int tam= sc.nextInt();
        int[] vet = new int[tam];
        for (int i=0;i<tam;i++){
            vet[i]=sc.nextInt();
        }
        int maior=vet[0];
        int menor=vet[0];
        for(int i=0;i<tam;i++){
            if(vet[i]>maior){
                maior=vet[i];
            }
            if(vet[i]<menor){
                menor=vet[i];
            }
        }
        System.out.printf("MAIOR = %d\nMENOR = %d\n", maior, menor);

    }
}
