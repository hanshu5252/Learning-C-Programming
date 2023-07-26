#include<stdio.h>
int main(){
    int a = 4;
    int *b;
    b = &a;
    printf("the address of the a is %u \n",b);
    printf("the value at tha address is %d \n",*b);
    printf("the value of a is %d",a);


}