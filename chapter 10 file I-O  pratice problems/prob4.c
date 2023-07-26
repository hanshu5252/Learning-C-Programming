#include<stdio.h>

int main()
{
    FILE* ptr;
    ptr = fopen("prob4.txt","r");
    int i; 
    fscanf(ptr,"%d",i);
    printf("the given value in the file is: %d \n",i);
    // i =2*i;
    // fprintf(ptr,"%d",i);

    return 0;
}