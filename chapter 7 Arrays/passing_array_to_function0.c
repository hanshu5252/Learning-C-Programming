#include <stdio.h>
void printarr(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("te value of given arras is %d \n", ptr[i]);
        ptr[2] = 555555;
    }
}

int main()
{
    int arr[] = {11, 2, 33, 44, 55, 666, 777};
    printarr(arr, 7);
    printf("%d", arr[2]);
    return 0;
}