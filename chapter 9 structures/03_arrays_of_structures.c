#include<stdio.h>
#include<string.h>
struct employe {
    int code;
    float salary;
    char name[];
};
int main()
{
    struct employe e[100];
    e[0].code = 100;
    e[10].salary= 132;
    return 0;
}