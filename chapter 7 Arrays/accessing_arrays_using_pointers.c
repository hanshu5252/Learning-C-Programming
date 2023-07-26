#include <stdio.h>

int main()
{
    int marks[4];
    int *ptr;
    ptr = &marks[0]; // or here we can write  ptr = marks; that will work same
    for (int i = 0; i < 4; i++)
    {
        printf("enter the marks of %dth studen is \n", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("thr marks of thr %dth student is %d \n", i + 1, marks[i]);
    }

    return 0;
}