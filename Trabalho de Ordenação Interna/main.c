#include "bolha.h"
#include "countingsort.h"
#include "heapsort.h"
#include "insercao.h"
#include "mergesort.h"
#include "quicksort.h"
#include "selecao.h"
#include "shellsort.h"
#include "quickselection.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
//=============================================================================


void teste(int n){

   //Delcaracao de variaveis
    //int n = (argc < 2) ? 10000 : atoi(argv[1]);
    int *array = (int*) malloc(n*sizeof(int));
    clock_t inicio, fim;
    double total;


  /*  //Geracao do conjunto a ser ordenado
    switch(ordem){
      case 'C': crescente(array, n);
      break;
      case 'D': decrescente(array, n);
      break;
      case 'A':  aleatorio(array, n);
      break;
      default: aleatorio(array, n);
    }
	 */
    //Mostrar o conjunto a ser ordenado
	 //mostrar(array, n);
		

    //Execucao do algoritmo de ordenacao
   printf("\n\n\nCrescente: \n");
   crescente(array, n);
	 inicio = clock();
    bolha(array, n);
    //countingsort(array, n);
    // heapsort(array, n);
    //insercao(array, n);
    //mergesort(array, n);
    //quicksort(array, n);
    //selecao(array, n);
    //shellsort(array, n);
    //quickselection(array, n);
	 fim = clock();
   total = ((fim - inicio) / (double)CLOCKS_PER_SEC);    
	 printf("Bolha: %f s\n", total);
   
   crescente(array, n);
	 inicio = clock();
    //bolha(array, n);
   countingsort(array, n);
    // heapsort(array, n);
    //insercao(array, n);
    //mergesort(array, n);
    //quicksort(array, n);
    //selecao(array, n);
    //shellsort(array, n);
    //quickselection(array, n);
	 fim = clock();
   total = ((fim - inicio) / (double)CLOCKS_PER_SEC);    
	 printf("Countingsort: %f s\n", total);

   crescente(array, n);
	 inicio = clock();
    //bolha(array, n);
    //countingsort(array, n);
    heapsort(array, n);
    //insercao(array, n);
    //mergesort(array, n);
    //quicksort(array, n);
    //selecao(array, n);
    //shellsort(array, n);
    //quickselection(array, n);
	 fim = clock();
   total = ((fim - inicio) / (double)CLOCKS_PER_SEC);    
	 printf("Heapsort: %f s\n", total);

   crescente(array, n);
	 inicio = clock();
    //bolha(array, n);
    //countingsort(array, n);
    //heapsort(array, n);
    insercao(array, n);
    //mergesort(array, n);
    //quicksort(array, n);
    //selecao(array, n);
    //shellsort(array, n);
    //quickselection(array, n);
	 fim = clock();
   total = ((fim - inicio) / (double)CLOCKS_PER_SEC);    
	 printf("Inserção: %f s\n", total);

    crescente(array, n);
	 inicio = clock();
    //bolha(array, n);
    //countingsort(array, n);
    //heapsort(array, n);
    //insercao(array, n);
    mergesort(array, n);
    //quicksort(array, n);
    //selecao(array, n);
    //shellsort(array, n);
    //quickselection(array, n);
	 fim = clock();
   total = ((fim - inicio) / (double)CLOCKS_PER_SEC);    
	 printf("Mergesort: %f s\n", total);

    crescente(array, n);
	 inicio = clock();
    //bolha(array, n);
    //countingsort(array, n);
    //heapsort(array, n);
    //insercao(array, n);
    //mergesort(array, n);
    quicksort(array, n);
    //selecao(array, n);
    //shellsort(array, n);
    //quickselection(array, n);
	 fim = clock();
   total = ((fim - inicio) / (double)CLOCKS_PER_SEC);    
	 printf("Quicksort: %f s\n", total);

   crescente(array, n);
	 inicio = clock();
    //bolha(array, n);
    //countingsort(array, n);
    //heapsort(array, n);
    //insercao(array, n);
    //mergesort(array, n);
    //quicksort(array, n);
    selecao(array, n);
    //shellsort(array, n);
    //quickselection(array, n);
	 fim = clock();
   total = ((fim - inicio) / (double)CLOCKS_PER_SEC);    
	 printf("Selecao: %f s\n", total);

  crescente(array, n);
	 inicio = clock();
    //bolha(array, n);
    //countingsort(array, n);
    //heapsort(array, n);
    //insercao(array, n);
    //mergesort(array, n);
    //quicksort(array, n);
    //selecao(array, n);
    shellsort(array, n);
    //quickselection(array, n);
	 fim = clock();
   total = ((fim - inicio) / (double)CLOCKS_PER_SEC);    
	 printf("Shellsort: %f s\n", total);

  crescente(array, n);
	 inicio = clock();
    //bolha(array, n);
    //countingsort(array, n);
    //heapsort(array, n);
    //insercao(array, n);
    //mergesort(array, n);
    //quicksort(array, n);
    //selecao(array, n);
    //shellsort(array, n);
    quickselection(array, n);
	 fim = clock();
   total = ((fim - inicio) / (double)CLOCKS_PER_SEC);    
	 printf("QuickSelectiont: %f s\n", total);

   printf("\n\n\nDecrescente: \n");
   decrescente(array, n);
	 inicio = clock();
    bolha(array, n);
    //countingsort(array, n);
    // heapsort(array, n);
    //insercao(array, n);
    //mergesort(array, n);
    //quicksort(array, n);
    //selecao(array, n);
    //shellsort(array, n);
    //quickselection(array, n);
	 fim = clock();
   total = ((fim - inicio) / (double)CLOCKS_PER_SEC);    
	 printf("Bolha: %f s\n", total);
   
   decrescente(array, n);
	 inicio = clock();
    //bolha(array, n);
    countingsort(array, n);
    // heapsort(array, n);
    //insercao(array, n);
    //mergesort(array, n);
    //quicksort(array, n);
    //selecao(array, n);
    //shellsort(array, n);
    //quickselection(array, n);
	 fim = clock();
   total = ((fim - inicio) / (double)CLOCKS_PER_SEC);    
	 printf("Countingsort: %f s\n", total);

   decrescente(array, n);
	 inicio = clock();
    //bolha(array, n);
    //countingsort(array, n);
    heapsort(array, n);
    //insercao(array, n);
    //mergesort(array, n);
    //quicksort(array, n);
    //selecao(array, n);
    //shellsort(array, n);
    //quickselection(array, n);
	 fim = clock();
   total = ((fim - inicio) / (double)CLOCKS_PER_SEC);    
	 printf("Heapsort: %f s\n", total);

   decrescente(array, n);
	 inicio = clock();
    //bolha(array, n);
    //countingsort(array, n);
    //heapsort(array, n);
    insercao(array, n);
    //mergesort(array, n);
    //quicksort(array, n);
    //selecao(array, n);
    //shellsort(array, n);
    //quickselection(array, n);
	 fim = clock();
   total = ((fim - inicio) / (double)CLOCKS_PER_SEC);    
	 printf("Inserção: %f s\n", total);

   decrescente(array, n);
	 inicio = clock();
    //bolha(array, n);
    //countingsort(array, n);
    //heapsort(array, n);
    //insercao(array, n);
    mergesort(array, n);
    //quicksort(array, n);
    //selecao(array, n);
    //shellsort(array, n);
    //quickselection(array, n);
	 fim = clock();
   total = ((fim - inicio) / (double)CLOCKS_PER_SEC);    
	 printf("Mergesort: %f s\n", total);

   decrescente(array, n);
	 inicio = clock();
    //bolha(array, n);
    //countingsort(array, n);
    //heapsort(array, n);
    //insercao(array, n);
    //mergesort(array, n);
    quicksort(array, n);
    //selecao(array, n);
    //shellsort(array, n);
    //quickselection(array, n);
	 fim = clock();
   total = ((fim - inicio) / (double)CLOCKS_PER_SEC);    
	 printf("Quicksort: %f s\n", total);

   decrescente(array, n);
	 inicio = clock();
    //bolha(array, n);
    //countingsort(array, n);
    //heapsort(array, n);
    //insercao(array, n);
    //mergesort(array, n);
    //quicksort(array, n);
    selecao(array, n);
    //shellsort(array, n);
    //quickselection(array, n);
	 fim = clock();
   total = ((fim - inicio) / (double)CLOCKS_PER_SEC);    
	 printf("Selecao: %f s\n", total);

   decrescente(array, n);
	 inicio = clock();
    //bolha(array, n);
    //countingsort(array, n);
    //heapsort(array, n);
    //insercao(array, n);
    //mergesort(array, n);
    //quicksort(array, n);
    //selecao(array, n);
    shellsort(array, n);
    //quickselection(array, n);
	 fim = clock();
   total = ((fim - inicio) / (double)CLOCKS_PER_SEC);    
	 printf("Shellsort: %f s\n", total);

   decrescente(array, n);
	 inicio = clock();
    //bolha(array, n);
    //countingsort(array, n);
    //heapsort(array, n);
    //insercao(array, n);
    //mergesort(array, n);
    //quicksort(array, n);
    //selecao(array, n);
    //shellsort(array, n);
    quickselection(array, n);
	 fim = clock();
   total = ((fim - inicio) / (double)CLOCKS_PER_SEC);    
	 printf("QuickSelection: %f s\n", total);

  printf("\n\n\nAleatorio: \n");
   aleatorio(array, n);
	 inicio = clock();
    bolha(array, n);
    //countingsort(array, n);
    // heapsort(array, n);
    //insercao(array, n);
    //mergesort(array, n);
    //quicksort(array, n);
    //selecao(array, n);
    //shellsort(array, n);
    //quickselection(array, n);
	 fim = clock();
   total = ((fim - inicio) / (double)CLOCKS_PER_SEC);    
	 printf("Bolha: %f s\n", total);
   
   aleatorio(array, n);
	 inicio = clock();
    //bolha(array, n);
    countingsort(array, n);
    // heapsort(array, n);
    //insercao(array, n);
    //mergesort(array, n);
    //quicksort(array, n);
    //selecao(array, n);
    //shellsort(array, n);
    //quickselection(array, n);
	 fim = clock();
   total = ((fim - inicio) / (double)CLOCKS_PER_SEC);    
	 printf("Countingsort: %f s\n", total);

   aleatorio(array, n);
	 inicio = clock();
    //bolha(array, n);
    //countingsort(array, n);
    heapsort(array, n);
    //insercao(array, n);
    //mergesort(array, n);
    //quicksort(array, n);
    //selecao(array, n);
    //shellsort(array, n);
    //quickselection(array, n);
	 fim = clock();
   total = ((fim - inicio) / (double)CLOCKS_PER_SEC);    
	 printf("Heapsort: %f s\n", total);

   aleatorio(array, n);
	 inicio = clock();
    //bolha(array, n);
    //countingsort(array, n);
    //heapsort(array, n);
    insercao(array, n);
    //mergesort(array, n);
    //quicksort(array, n);
    //selecao(array, n);
    //shellsort(array, n);
    //quickselection(array, n);
	 fim = clock();
   total = ((fim - inicio) / (double)CLOCKS_PER_SEC);    
	 printf("Inserção: %f s\n", total);

   aleatorio(array, n);
	 inicio = clock();
    //bolha(array, n);
    //countingsort(array, n);
    //heapsort(array, n);
    //insercao(array, n);
    mergesort(array, n);
    //quicksort(array, n);
    //selecao(array, n);
    //shellsort(array, n);
    //quickselection(array, n);
	 fim = clock();
   total = ((fim - inicio) / (double)CLOCKS_PER_SEC);    
	 printf("Mergesort: %f s\n", total);

   aleatorio(array, n);
	 inicio = clock();
    //bolha(array, n);
    //countingsort(array, n);
    //heapsort(array, n);
    //insercao(array, n);
    //mergesort(array, n);
    quicksort(array, n);
    //selecao(array, n);
    //shellsort(array, n);
    //quickselection(array, n);
	 fim = clock();
   total = ((fim - inicio) / (double)CLOCKS_PER_SEC);    
	 printf("Quicksort: %f s\n", total);

   aleatorio(array, n);
	 inicio = clock();
    //bolha(array, n);
    //countingsort(array, n);
    //heapsort(array, n);
    //insercao(array, n);
    //mergesort(array, n);
    //quicksort(array, n);
    selecao(array, n);
    //shellsort(array, n);
    //quickselection(array, n);
	 fim = clock();
   total = ((fim - inicio) / (double)CLOCKS_PER_SEC);    
	 printf("Selecao: %f s\n", total);

   aleatorio(array, n);
	 inicio = clock();
    //bolha(array, n);
    //countingsort(array, n);
    //heapsort(array, n);
    //insercao(array, n);
    //mergesort(array, n);
    //quicksort(array, n);
    //selecao(array, n);
    shellsort(array, n);
    //quickselection(array, n);
	 fim = clock();
   total = ((fim - inicio) / (double)CLOCKS_PER_SEC);    
	 printf("Shellsort: %f s\n", total);

   aleatorio(array, n);
	 inicio = clock();
    //bolha(array, n);
    //countingsort(array, n);
    //heapsort(array, n);
    //insercao(array, n);
    //mergesort(array, n);
    //quicksort(array, n);
    //selecao(array, n);
    //shellsort(array, n);
    quickselection(array, n);
	 fim = clock();
   total = ((fim - inicio) / (double)CLOCKS_PER_SEC);    
	 printf("QuickSelection: %f s\n", total);


    free(array);

}

int main(int argc, char **argv) {
    printf("2000 valores\n");
    teste(2000);
    printf("4000 valores\n");
    teste(4000);
    printf("8000 valores\n");
    teste(8000);
    printf("16000 valores\n");
    teste(16000);
    printf("32000 valores\n");
    teste(32000);
    printf("64000 valores\n");
    teste(64000);
    printf("128000 valores\n");
    teste(128000);
    return 0;
}
