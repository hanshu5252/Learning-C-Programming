#include<stdio.h>
void printarray(int *ptr, int n)
{
    for(int i=0;i<n;i++) {
    printf("the value in the %dth array is %d\n",i+1,*(ptr+i));
    }
}
int main(){
int arr[] = {22,33,44,55,66,77,99};
printarray(arr,7);

    return 0;
}