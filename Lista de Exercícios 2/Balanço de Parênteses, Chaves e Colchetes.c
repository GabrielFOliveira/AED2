/*

Dada uma expressão qualquer com parênteses, chaves e colchetes, indique se a quantidade de parênteses, chaves e colchetes está correta ou não, sem levar em conta o restante da expressão. Por exemplo:

[a+(b*c)-2-a]        está correto
[({a+b}*(2-c)-{2+a})*2]  está correto

enquanto

[{a*b]-(2+c)}         está incorreto
2*(3-a))           está incorreto
)3+b*(2-c)(        está incorreto



Entrada
A primeira linha contém o valor de N e as seguintes linhas haverá N expressões (1 <= N <= 10000), cada uma delas com até 1000 caracteres.

Saída
O arquivo de saída deverá ter a quantidade de linhas correspondente ao arquivo de entrada, cada uma delas contendo as palavras correct ou incorrect de acordo com as regras acima fornecidas.
*/



#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
//======================================
typedef struct Celula{
  int dado;
  struct Celula *prox;
}Celula;
//======================================
typedef struct Pilha{
  Celula *topo;
  int tam;
}Pilha;
//======================================
Celula *create_celula(int dado, Celula *prox){
  Celula *tmp = (Celula*)malloc(sizeof(Celula));
  tmp->dado = dado;
  tmp->prox = prox;
  return tmp;
}
//======================================
void create_pilha(Pilha *p){
  p->topo = NULL;
  p->tam = 0;
}

//======================================
void push(Pilha *p, int dado){
  Celula *tmp = create_celula(dado, p->topo);
  p->topo = tmp;
  p->tam++;
}
//======================================


bool is_empty_pilha(Pilha *p){
  return p->topo == NULL;
}

//======================================
int pop(Pilha *p){
  if(is_empty_pilha(p)){
    return -1;
  }

  int res = p->topo->dado;
  Celula *tmp = p->topo;
  p->topo = p->topo->prox;
  free(tmp);

  p->tam--;
  return res;
}

//======================================
int size_pilha(Pilha *p){
  return p->tam;
}

//======================================
void print_pilha(Pilha *p){

  printf("Tamanho da Pilha: %d\n\n", size_pilha(p));

  for(Celula *i = p->topo; i!=NULL; i = i->prox){
    printf("%d\n", i->dado);
  }
}

//===========================================
bool valida_expressao(char texto[]){

  Pilha pilha;
  create_pilha(&pilha);

  for(int i=0; i<strlen(texto); i++){

    if(texto[i]=='('||texto[i]=='['||texto[i]=='{'){
      push(&pilha, (int)texto[i]);
    }  


    if(texto[i] == ')'){
      int x = pop(&pilha);
      if(x != '(') return false;
    }

    if(texto[i] == ']'){
      int x = pop(&pilha);
      if(x != '[') return false;
    }

    if(texto[i] == '}'){
      int x = pop(&pilha);
      if(x != '{') return false;
    }
  }


  if(is_empty_pilha(&pilha))
    return true;
  else return false;
}


//===========================================
int main(void) {

  char v[1000][1000];
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%s",v[i]);
  }
for(int i=0;i<n;i++){

  if(valida_expressao(v[i])){
    printf("correct\n");
  }else{
    printf("incorrect\n");
  }
}
  return 0;
}
