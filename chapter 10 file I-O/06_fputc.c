#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("putcdemo.txt","w ");
    putc('c',ptr);
    putc('d',ptr);
    putc('e',ptr);
    putc('f',ptr);
    fclose(ptr);
    return 0;
}