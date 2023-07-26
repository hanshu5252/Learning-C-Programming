#include<stdio.h>
void sumandavg(int a , int b,int *sum,float *avg){
    *sum = a+b;
    *avg = (float)(*sum)/2;
}
int main(){
    int i = 6,j = 7,sum;
    float avg;
    sumandavg(i,j,&sum,&avg);
    printf("the value of sum is %d  \n",sum);
     printf("the value of avg is %f",avg);
}