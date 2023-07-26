#include<stdio.h>

int main()
{
    int arr[10];
    int *ptr = &arr[0];    // or int *ptr = arr
    ptr = ptr+2;
    if(ptr == &arr[2]){
        printf("the value of ptr  is same as the arr[2]  \n");
    }
    else{
        printf("not equal");
    }
    return 0;
}