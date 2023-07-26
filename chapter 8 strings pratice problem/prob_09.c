#include<stdio.h>
void check(char str[],char c){
    char* ptr = str;
   
    while(*ptr!= '\0'){
        if(*ptr == c){
          printf("the character %c is present in the string \n",c);
        }
        ptr++;
    }
    return ; 
}
int main()
{
    char str[] ="Harry";
    check(str,'r');
   
    return 0;
}