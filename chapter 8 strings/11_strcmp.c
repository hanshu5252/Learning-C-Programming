#include<stdio.h>
#include<string.h>
int main()
{
    char str1[40]="hello";
    char str2[]="harry";
   int value = strcmp(str1,str2);
    printf(" the value is %d",value);
    return 0;

}