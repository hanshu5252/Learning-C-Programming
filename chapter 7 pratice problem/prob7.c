#include<stdio.h>
void printtable(int *multable,int num,int n){
    for(int i=0;i<n;i++){
      multable[i]= num*(i+1);
    }
      for(int i=0;i<n;i++){
        printf("the table is %d \n",multable[i]);
      }

}
int main()
{
    int multable[3][10];
    printtable(multable[0],2,10);
     printtable(multable[1],5,10);
      printtable(multable[2],7,10);

    

    return 0;
}