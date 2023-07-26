#include <stdio.h>
// chapter 5 function and recursion
  void display();    // function prototype
int main()
{
    int a;
    printf("intializing display function\n");
    display();                                    // function call
    printf("display function finished it works\n");
    return 0;
}
void display(){    //// function defination
    printf("this is display  \n");
}      