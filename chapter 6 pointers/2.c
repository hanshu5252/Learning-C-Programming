#include<stdio.h>
// pointer to pointer concept
int main(){
    int i =10;
    int *j = &i;
    int **k = &j;
    printf("the value of i is %d \n ",i);
     printf("the address  of i is %u \n ",j);
      printf("the address of j is %u \n ",k);
       printf("the address of k is  is %u \n ",&k);

}