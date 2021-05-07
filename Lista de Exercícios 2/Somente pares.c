#include <stdio.h>
#include <stdlib.h>


int* somente_pares(int *v, int n){
   int* temp = (int *) malloc(n * sizeof(int));
   int j=0;
   for(int i=0;i<n;i++){
     if(v[i]%2==0){
       temp[j]=v[i];
       j++;
     }
   }
   temp[j]=0;
   return temp;
}



int main(void) {
  int n;
  scanf("%d", &n);
  int* v = (int *) malloc(n * sizeof(int));
  for (int i=0;i<n;i++){
    scanf("%d", &v[i]);
  }
  v= somente_pares(v,n);
  int i=0;
  while(v[i]!=0){
    printf("%d\n",v[i]);
    i++;
  }
  
  return 0;
}