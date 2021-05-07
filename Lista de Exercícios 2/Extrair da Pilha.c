/*
Considere a implementação da TAD Pilha de inteiros, implementada de forma dinâmica usando ponteiros conforme visto em sala de aula, com a estrutura Celula e Pilha, com os seguintes métodos:

void create_pilha(Pilha *p);
bool push(Pilha *p, int dado);
int pop(Pilha *p);
void print_pilha(Pilha *p);
bool is_empty_pilha(Pilha *p);
int size_pilha(Pilha *p);
Estenda a definição da estrutura Pilha, para incluir um método chamado extrairdapilha(Pilha *p, int x), que pesquisa e retorna um inteiro x de uma pilha. Os demais elementos devem permanecer na Pilha, na mesma ordem, que estavam antes de remover o inteiro x. Essa função deve obedecer ao protótipo:

int extrairdapilha(Pilha *p, int x);
Além da implementação, você deve estimar e apresentar a analise de complexidade do seu algoritmo para o melhor e pior caso. Escreva a análise de complexidade nos comentários, no inicio do seu código, juntamente com seu nome completo e matrícula.

Entrada
Deve ser informado um valor inteiro N que representa a quantidade de elementos presente na pilha e o Valor de X. Cada linha a seguir é um inteiro, na ordem que devem ser inseridos na pilha.

Saída
Impressão do valor removido e dos dados na pilha. Se o valor X não for encontrado deve retornar o valor -1.
*/

#include <stdio.h>

int extrairdapilha(Pilha *p, int x){

Celula *ant = p->topo; //aponta para a primeira posicao da fila nao utilizada
Celula *aux = p->topo->prox; //aponta para o primeiro elemento da fila

if(p==NULL){
    return 0;
}else{
while(aux!=NULL && aux->dado != x){ //movimenta os ponteiros enquanto nao encontrar x
        ant = ant->prox;
        aux = aux->prox;

}
if(aux==NULL){
        return -1;
}else if(aux->dado == x){
    ant->prox = aux->prox; //a posicao do elemento x recebe o valor da proxima
    free(aux);
    aux = NULL;
            

    if(ant->prox == NULL){
        p->topo = ant;
    }

    p->tam--; //diminui o tamanho da fila

    }else{
        return -1;
    }
}

    return x; 

}