#include<stdio.h>
struct vector{
    int x;
    int y;
};
struct vector sumvector(struct vector a,struct vector b){
    struct vector result;
    result.x=a.x+b.x;
    result.y=a.y+b.y;
    return result;
}
int main()
{
    struct vector v1,v2,sum;
    v1.x = 23;
    v1.y = 34;
    v2.x = 24;
    v2.y = 45;
    printf("the value of vector v1 is %di+%dj \n",v1.x,v1.y);
    printf("the value of vector v2 is %di+%dj \n",v2.x,v2.y);
    sum = sumvector(v1,v2);
    printf("the sum of these vectors is %di+%dj ",sum.x,sum.y);
    return 0;
    }