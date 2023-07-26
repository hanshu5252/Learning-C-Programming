 #include<stdio.h>
#include<string.h>
struct employe{
    int code;
    float salary;
    char name[10];
};
void show(struct employe emp){
    printf("the code of e1  is %d \n",emp.code );
  printf("the salary of e1  is %f \n",emp.salary );
      printf("the code of e1  is %s \n",emp.name );
}
 int main()
 {
    struct employe e1;
    e1.code =100;
    e1.salary=23.34;
    strcpy(e1.name,"harry");
    show(e1); 
    return 0;
 }