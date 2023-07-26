#include<stdio.h>
float force(float mass);
int main (){
    int x;
    printf("enter the value of x %n");
    scanf("%d",&x);
    printf("the value of force of attraction is %f",force(x));
    return 0;
}
float force(float mass){
    float result = (float)mass*9.8;
    return result;45


}
