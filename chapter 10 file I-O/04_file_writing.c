#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("writing.txt","w");
    int num = 2534;
    fprintf(ptr,"%d",num);
    fclose(ptr);
    return 0;
} 