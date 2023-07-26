#include <stdio.h>
// chapter 5 function and recursion
/*   void display();    // function prototype
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
}      */

// quiz question 
/*   void goodmorning();
void goodafternoon();
void goodnight();

int main()  
{
    int a;
    printf("hello my name is Himanshu \n");
    goodmorning();
    goodafternoon();
    goodnight();  
    
    return 0;
}
void goodmorning(){
    printf("good morning \n");
}
void goodafternoon(){
    printf("good goodafternoon \n");
}
void goodnight(){
    printf("good night");
}    */

 // another wayy to do above question
/*   void goodmorning();
void goodafternoon();
void goodnight();

int main()  
{
    int a;
    printf("hello my name is Himanshu \n");
    goodmorning();
    return 0;
}
void goodmorning(){
    printf("good morning \n");
      goodafternoon();
}
void goodafternoon(){
    printf("good goodafternoon \n");
      goodnight();
}
void goodnight(){
    printf("good night");
}         */

/* int sum(int a, int b);  // function prototype // sum is a function which takes a and b as input and returns an integer autput 
int main(){ 
    int c; 
    c = sum(2,5);  // function call
    printf("the value of c is %d",c);
    return 0;
}
int sum(int a,int b){
    int result;
    result = a+b;
    return result;
}    */
// quiz question  
/*    #include<math.h>
    int main(){
        int side;
        printf("enter the value of side \n");
        scanf("%d",&side);
        int area;
        area = pow(side,2);
        printf("the value of area is %d \n",area);
    }     */

// recursion
/*  int factorial(int x);
  int main(){
      int a;
      printf("enter the value of a \n");
      scanf("%d",&a);
      printf("the value of factorial %d is %d \n",a,factorial(a));
      return 0;
  }
  int factorial(int x){
      printf("calling factorial(%d) \n ",x);
      if(x ==1 || x == 0){
          return 1;  
      }
      else{
          return x*factorial(x-1);
      }
  }      */







