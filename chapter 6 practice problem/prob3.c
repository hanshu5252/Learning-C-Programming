#include<stdio.h>
void swap(int *a);
int main(){
    int i = 10;
    printf("the value of i is %d \n",i);
    swap(&i);  //  here the address of i is transferred to swap finction
    printf("the value of i is %d",i);
}
void swap(int *a){
    *a = *a*10;   
}
