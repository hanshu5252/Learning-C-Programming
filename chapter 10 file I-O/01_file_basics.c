#include<stdio.h>

int main()
{   FILE *ptr;
   ptr = fopen("sample.txt","r");   // for read operation 
 //  ptr = fopen("sample.txt","w");    // for write operation
    return 0;
    
}
// in a appnd mode if file is not exist then it creates a new file