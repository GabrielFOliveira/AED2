#include "quickselection.h"
void quickselection(int vet[], int n){ 

    int i = 0, j =n;
    int pivo = vet[n/2];
    while (i <= j) {
        while (vet[i] < pivo) i++;
        while (vet[j] > pivo) j--;
        if (i <= j) {
            swap(vet + i, vet + j);
            i++;
            j--;
        }
    }
    int *ponteiro=&vet[n/2];
    selecao(vet, n/2);
    selecao(ponteiro,n-n/2);

 }

