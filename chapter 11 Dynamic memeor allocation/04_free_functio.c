#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int *ptr1;
    ptr = (int*)malloc(600*sizeof(int));
    for(int i =0;i<600;i++){
        ptr1 = (int*)malloc(6000*sizeof(int));
        printf("enter the value of %d element: ",i  );
        scanf("%d",&ptr[i]);
        free(ptr1);
    }
    for(int i =0;i<6;i++){
        printf("the value of %d element is %d \n",i,ptr[i]);
    }
    return 0;
}