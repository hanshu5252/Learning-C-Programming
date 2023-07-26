#include<stdio.h>
#include<string.h>
struct employe {
    int code;
    float salary;
    char name[];
};
int main()
{
    struct employe e1,e2,e3;
    printf("enter the code of e1 \n");
    scanf("%d",&e1.code);
    printf("enter the name of e1 \n");
    scanf("%s",e1.name);
    printf("enter the salary of e1 \n");
    scanf("%f",&e1.salary);
    printf("enter the code of e2 \n");
    scanf("%d",&e2.code);
    printf("enter the name of e2 \n");
    scanf("%s",e2.name);
    printf("enter the salary of e2 \n");
    scanf("%f",&e2.salary);
    printf("enter the code of e3 \n");
    scanf("%d",&e3.code);
    printf("enter the name of e3 \n");
    scanf("%s",e3.name);
    printf("enter the salary of e3 \n");
    scanf("%f",&e3.salary);



    return 0;
}