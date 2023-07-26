#include<stdio.h>
/* case of wrong swap
void wrong_swap(int a, int b);
int main(){
    int x = 3, y = 4;
    printf("the value of x and y is %d  %d \n",x,y); 
    wrong_swap(x,y); // here only copy of x and y are copied to swap function 
    printf("the value of x and y after swap is %d %d",x,y);
}
void wrong_swap(int a, int b){
    int temp =a;
    a =b;
    b =temp;
}     */
void swap(int *a, int *b);
int main(){
    int x = 3, y = 4;
    printf("the value of x and y is %d  %d \n",x,y); 
    swap(&x,&y); // here address of x and y are given to the function
    printf("the value of x and y after swap is %d %d",x,y);
}
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b =temp;
}