/*
O Imperador Júlio César foi um dos principais nomes do Império Romano. Entre suas contribuições, temos um algoritmo de criptografia chamado "Ciframento de César". Segundo os historiadores, César utilizava esse algoritmo para criptografar as mensagens que enviava aos seus generais durante as batalhas. A ideia básica é um simples deslocamento de caracteres. Assim, por exemplo, se a chave utilizada para criptografar as mensagens for 3, todas as ocorrências do caractere 'a' são substituídas pelo caractere 'd', as do 'b' por 'e', e assim sucessivamente. Crie uma função iterativa que recebe uma string como parâmetro e retorna outra contendo a entrada de forma cifrada. Neste exercício, suponha a chave de ciframento três. Implemente um programa para executar sua função que receba várias linhas contendo strings e, para cada string, imprimir a a mensagem criptografada. A entrada termina com a leitura da palavra FIM. Você deve cifrar somente letras do alfabeto  (A até Z, a até z), os demais caracteres não serão cifrados. Se a chave é igual a 3,  'a' é substituído por 'd', então 'z' é substituído por 'c', pois o algoritmo anda de forma circular sobre o alfabeto (A até Z, a até z).

Entrada
Lista de palavras, finalizada pela palavra "FIM".

Saída
Mensagem criptografada de cada linha.
*/

import java.util.Scanner;

class Main {
    public static void main(String[] args) {    
        Scanner entrada = new Scanner(System.in);
        String CP;
        String texto = entrada.nextLine();
        int chave = 3;
        CP = criptografa ( texto, chave); 
        System.out.printf("%s", CP); 
    }   
           
     
    public static String criptografa(String texto, int chave) {
          int i, n = texto.length();
          String saux = "";
 
          for (i=0; i<n; i++) {
            if(texto.charAt(i)==' '){
                saux = saux + (char)(texto.charAt(i));
            }
            else{
                saux = saux + (char)(texto.charAt(i) + chave);
            }
          }
 
          return(saux);
        }
        
}