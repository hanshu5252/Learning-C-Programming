#include<stdio.h>

int main()
{
char str[34];
printf("enter your name ");
gets(str);                  // for gettting characters with spaces
puts(str);                  // for printing characters with spaces
 printf("your name is %s",str);
    return 0;
}
