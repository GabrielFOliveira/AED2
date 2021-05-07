/*
Escreva um programa que leia um número inteiro e mostre uma mensagem indicando se este número é par ou ímpar e se é positivo ou negativo. Considere que o número 0 seja par e neutro

Entrada
Um número inteiro.

Saída
Imprimir se a palavra PAR ou IMPAR, seguido de POSITIVO ou NEGATIVO
*/
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int p=0;
        int n=0;
        int numero=sc.nextInt();
        if(numero%2==0){
            System.out.printf("PAR");
        }
        else{
            System.out.printf("IMPAR");
        }
        if(numero>0){
            System.out.printf(" e POSITIVO");
        }
        else if(numero<0){
            System.out.printf(" e NEGATIVO");
        }
        else{
            System.out.printf(" e NEUTRO");
        }

    }
}
