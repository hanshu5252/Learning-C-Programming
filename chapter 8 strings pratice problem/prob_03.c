#include<stdio.h>
int strlen(char * str1){
    char* ptr = str1;
    int len =0;
    while(*ptr!= '\0'){
        len++;
        ptr++;
    }
    return len;
}
int main()
{
    char str[]  = "Harry";
    int l = strlen(str);
    printf("the length os string is: %d ",l );
    return 0;
}