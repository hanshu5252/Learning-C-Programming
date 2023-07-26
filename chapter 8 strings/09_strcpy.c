#include<stdio.h>
#include<string.h>
int main()
{
    char str1[] = "harry";
    char str2[45];
    strcpy(str2,str1);
    printf("now str2 is %s",str2);
    return 0;
}