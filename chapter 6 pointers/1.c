#include<stdio.h>

int main()
{
   int i = 10; 
   int* j = &i;
   printf("the value of a is %d  \n",i);
   printf("the address of i is%u  \n",&i);
   printf("the address of i is%u  \n",j);
   printf("the value  of i is %d \n",*j);
   

    
    return 0;
}