#include<stdio.h>
float average(int a,int b,int c);
int main()  {
    int p,q,r;
printf("enter the value of p %n");
scanf("%d",&p);
printf("enter the value of q %n");
scanf("%d",&q);
printf("enter the value of r %n");
scanf("%d",&r);
printf("the value of average is %f",average(p,q,r));
return 0;
}
float average(int a,int b,int c){
    float result;
    result = (float)(a+b+c)/3;
    return result;
}