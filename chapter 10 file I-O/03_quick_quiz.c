#include <stdio.h>

int main()
{
    int num;
    int num2;
    FILE *ptr;
    ptr = fopen("harry.txt", "r");
    if (ptr == NULL)
    {
        printf("the file does not exist");
    }
    else
    {

        fscanf(ptr, "%d", &num);
        printf("the value of num is %d \n", num);
        fscanf(ptr, "%d", &num2);
        printf("the value of num2 is %d", num2);
        fclose(ptr); // we have to close file
        return 0;
    }
}