#include<stdio.h>

int main()
{
    FILE *ptr;
    int a,b,c;
    ptr = fopen("prob1.txt","r");
    fscanf(ptr,"%d %d %d",&a,&b,&c);
    printf("the value of a b c is %d %d %d \n",a,b,c);
    return 0;
}