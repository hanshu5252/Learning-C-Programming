#include<stdio.h>
typedef struct date {
    int date;
    int month;
    int year;
}date;
void display(date d){
    printf("the date is %d/%d/%d \n",d.date,d.month,d.year);

}
int main()
{
date d ={2,11,21};
display(d);
    return 0;
}