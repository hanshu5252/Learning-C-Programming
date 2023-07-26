#include<stdio.h>

int main()
{
    int mul[10];
    for(int i =0;i<10;i++){
        mul[i]= (i+1)*8;
    }
      for(int i =0;i<10;i++){
        printf("8X%d=%d \n",(i+1),mul[i]);
    }
    return 0;
}
