#include<stdio.h>
typedef struct complex_no{
int real;
int img;
}comp;
void display(comp c){
    printf("the complex number is %d+j%d \n",c.real,c.img);
}
int main()
{    comp c[5];
for(int i = 0;i<5;i++){
     printf("enter the real part of complex no %d \n",i+1);
     scanf("%d",&c[i].real);
     printf("enter the imaginary part of complex no %d \n",i+1);
     scanf("%d",&c[i].img);
}
for(int i = 0;i<5;i++){
    display(c[i]);
}
    return 0;
}