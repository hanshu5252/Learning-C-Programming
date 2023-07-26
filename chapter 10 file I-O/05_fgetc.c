#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("getcdemo.txt","r");
    // fgetc is a function used to read a file character by character
    printf("the value of characters in file is %c \n",fgetc(ptr));
    printf("the value of characters in file is %c \n",fgetc(ptr));
    printf("the value of characters in file is %c \n",fgetc(ptr));
    printf("the value of characters in file is %c \n",fgetc(ptr));
    printf("the value of characters in file is %c \n",fgetc(ptr));
    printf("the value of characters in file is %c \n",fgetc(ptr));
    printf("the value of characters in file is %c \n",fgetc(ptr));
    printf("the value of characters in file is %c \n",fgetc(ptr));

    return 0;
}