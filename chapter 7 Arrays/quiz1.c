#include<stdio.h>
int main(){
    int marks[5];
    printf("enter the marks of student 1: \n");
    scanf("%d",&marks[0]);
    printf("enter the marks of student 2: \n");
    scanf("%d",&marks[1]);
    printf("enter the marks of student 3: \n");
    scanf("%d",&marks[2]);
    printf("enter the marks of student 4: \n");
    scanf("%d",&marks[3]);
    printf("enter the marks of student 5: \n");
    scanf("%d",&marks[4]);
    printf("the entered value of marks is %d %d %d %d %d \n",marks[0],marks[1],marks[2],marks[3],marks[4]);
}