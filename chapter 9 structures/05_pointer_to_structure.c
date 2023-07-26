#include<stdio.h>
#include<string.h>
struct employe{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct employe e1;
    struct employe *ptr;
    ptr =&e1;
    (*ptr).code= 100;    // or we can use here ptr->code = 100;
    printf("the salary of e1 is %d \n",e1.code);
    printf("the salary of e1 is %d \n",(*ptr).code);

    
    return 0;
} 