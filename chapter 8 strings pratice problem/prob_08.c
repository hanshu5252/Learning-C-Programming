#include<stdio.h>
int occurence(char str[],char c){
    char* ptr = str;
    int count = 0;
    while(*ptr!= '\0'){
        if(*ptr == c){
          count++;
        }
        ptr++;
    }
    return count; 
}
int main()
{
    char str[] ="Harry";
    int i = occurence(str,'r');
    printf("ans is: %d",i);
    return 0;
}