#include<stdio.h>
int main(){
    int a=3;
    printf("%d %d %d",a,++a,a++);    // it will go from right to left, answer is 5,5,3
    return 0;
}