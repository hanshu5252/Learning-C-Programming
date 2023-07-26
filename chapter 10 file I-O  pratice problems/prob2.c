#include<stdio.h>

int main()
{   
    int num;
    printf(" enter the number of which you need to table: ");
    scanf("%d",&num);
    FILE* ptr;
    ptr = fopen("prob2.txt","w");
    for(int i =0;i<10;i++){
        fprintf(ptr, "%d X %d = %d \n",num,i+1,num*(i+1));
    }
    fclose(ptr);

    return 0;
}