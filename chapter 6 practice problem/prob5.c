#include<stdio.h>
int main(){
    int i = 345;
    int *ptr;
    int **ptr_ptr;
    ptr = &i;
    ptr_ptr = &ptr;
    printf("the value of is %d",**ptr_ptr);

}