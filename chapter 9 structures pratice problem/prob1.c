
#include<stdio.h>
struct vector{
    int x;
    int y;
};
int main()
{
    struct vector v1,v2,v3;
    v1.x = 23;
    v1.y = 34;
    v2.x = 24;
    v2.y = 45;
    printf("the value of vector v is %di+%dj",v1.x,v1.y);
    return 0;
    }