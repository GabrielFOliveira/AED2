/*
Faça um algoritmo para ler dois inteiros (variáveis A e B) e efetuar as operações de adição, subtração, multiplicação e divisão de A por B apresentando ao final os quatro resultados obtidos.

Entrada
A entrada contém 2 valores inteiros.

Saída
Imprimir a operação e o resultado da operação para cada operação a ser executada. Cuide para que tenha um espaço antes e depois do sinal de igualdade, conforme o exemplo abaixo e  não esqueça de imprimir o fim de linha após o resultado. Para casos em que o resultado seja real, imprima com 2 casas decimais.
*/

import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n1= sc.nextInt();
        int n2= sc.nextInt();
        System.out.printf("SOMA = %d\n", n1+n2);
        System.out.printf("SUBTRACAO = %d\n", n1-n2);
        System.out.printf("MULTIPLICACAO = %d\n", n1*n2);
        if (n2==0){
            System.out.printf("DIVISAO = INDETERMINADO\n");
        }
        else{
            float result=(float)n1/(float)n2;
            System.out.printf("DIVISAO %.2f\n", result);
        }
    }
}

