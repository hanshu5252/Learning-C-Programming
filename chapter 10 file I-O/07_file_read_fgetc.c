#include<stdio.h>

int main()
{      // here we read whole file
    FILE *ptr;
    char c;
    ptr = fopen("getcdemo.txt","r");
    c=fgetc(ptr);
    while(c!=EOF){
        printf("%c",c);
        c=fgetc(ptr);
    }
    return 0;
}