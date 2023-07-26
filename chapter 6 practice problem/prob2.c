#include<stdio.h>
void printadd(int a){
    printf("the address of variable a is %u \n",&a);
}
int main(){
    int i = 4;
    printf("the value of variable i is %d \n",i);
    printadd(i);   // here we pass the value i to the varible a
    printf("the address of i is %u",&i);
}