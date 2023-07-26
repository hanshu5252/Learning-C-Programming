#include<stdio.h>
int sum(int a,int b);
int main(){
    int x =4,y = 3;
    printf("the value of sum is %d",sum(x,y));
}
int sum(int a,int b){
int result = a+b;
return result;
}