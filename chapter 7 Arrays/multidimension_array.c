#include<stdio.h>
// 2 dimension array
int main()
{
    int n_students=3;
    int n_subjects=5;
     int marks[3][5];
     for(int i = 0;i<n_students;i++){
        for(int j =0;j<n_subjects;j++){
            printf("enter the marks of %dstudent in  %d subject \n",(i+1),(j+1));
            scanf("%d",&marks[i][j]);
        }
     }
        for(int i = 0;i<n_students;i++){
        for(int j =0;j<n_subjects;j++){
            printf(" the marks of %dstudent in  %d subject is %d\n",(i+1),(j+1),marks[i][j]);
        }
     }
    return 0;
}