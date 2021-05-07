/*
Considere a implementação da TAD Fila de inteiros, implementada de forma dinâmica usando ponteiros conforme visto em sala de aula, com a estrutura Celula e Fila, com os seguintes métodos:

void create_fila(Fila *f);
bool enqueue(Fila *f, int dado);
int dequeue(Fila *f);
void print_fila(Fila *f);
bool is_empty_fila(Fila *f);
int size_fila(Fila *f);
Estenda a definição da estrutura Fila, para incluir um método chamado extrairdafila(Fila*f, int x), que pesquisa e retorna um inteiro x de uma fila. Os demais elementos devem permanecer na fila, na mesma ordem, que estavam antes de remover o inteiro x. Essa função deve obedecer ao protótipo:

int extrairdafila(Fila *f, int x);
Além da implementação, você deve estimar e apresentar a analise de complexidade do seu algoritmo para o melhor e pior caso. Escreva a análise de complexidade nos comentários, no inicio do seu código, juntamente com seu nome completo e matrícula.

Entrada
Deve ser informado um valor inteiro N que representa a quantidade de elementos presente na fila e o Valor de X. Cada linha a seguir é um inteiro, na ordem que devem ser inseridos na fila.

Saída
Impressão do valor removido e dos dados na fila. Se o valor X não for encontrado deve retornar o valor -1.
*/

#include <stdio.h>

int extrairdafila(Fila *f, int x){

Celula *ant = f->inicio;
Celula *aux = f->inicio->prox; 

if(f==NULL){
    return 0;
}else{
while(aux!=NULL && aux->dado != x){ 
        ant = ant->prox;
        aux = aux->prox;

}
if(aux==NULL){
        return -1;
}else{
        
            
    ant->prox = aux->prox; 
    free(aux);
    aux = NULL;
            

    if(ant->prox == NULL){
        f->fim = ant;
    }

    f->tam--; 

    }
}

    return x; 

}

