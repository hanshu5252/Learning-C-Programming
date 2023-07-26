#include<stdio.h>
#include<string.h>
typedef struct employee{
int code;
float salary;
char name[20];
}emp;
void show(struct employee a){
    printf("the value of code %d",a.code);
}
int main()
{
    emp e1;
e1.code=2000;
e1.salary=20000;
show(e1);
    return 0;
}