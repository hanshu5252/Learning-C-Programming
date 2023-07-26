#include<stdio.h>
#include<string.h>
struct employe{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct employe e1 = {100,345,"harry"};
printf("the salary of e1 is %f \n",e1.salary);
    

    
    return 0;
}