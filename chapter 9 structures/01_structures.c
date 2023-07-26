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
    e1.code=100;
    e1.salary=34.543;
    strcpy(e1.name,"harry");
    printf("%d \n",e1.code);
    printf("%f \n",e1.salary);
    printf("%s \n",e1.name);
    return 0;
}