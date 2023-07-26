/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
// CHAPTER 4 LOOP CONTROL INSTRUCTION 
int main()
{
    // WHILE LOOP
  /*  int a;
    printf("enter the value of a \n");
    scanf("%d",&a);
    while(a<10)
    {
        printf("the value of a is %d \n",a);
        a++;
        
    }     */

// quiz question
/*int a = 10;
while(a<=20){
    printf("the value of a is %d \n",a);
    a++;
    
}*/
// quiz question
    /*    int i = 0;
while (i<=20){
    if("i>=10"){
        printf("the value of i is %d  \n",i);
        
    }
    i++;
    
}     */

// increment and decremnet operators

  /*  int i=5;
    printf("the value of i is %d \n",i++);
    printf("the value of i is %d",i);
  //  i=i+1   ,i++ pahle i ki value print hogi phir i main increment hoga, ++i pahle i main incremnet hoga the print hoga
//  i+= 10  , incrememt in by 10
  */
  // do while LOOP
 /*      int i= 0;
  do{
      printf("the value of i is %d\n ",i);  // intiali value to i ki print hogi hi
      i++;  // do while first prints the value and then checks the condition
  }
  while(i<10);      */
  // quiz question
 /* int i=0;
  int n;
  printf("enter the value of n \n");
  scanf("%d",&n);
  do{
      printf("the value of i is %d\n",i);
      i++;
  }
  while(i<=n);  */
  
  // for LOOP
 /*     for(int a=0;a<10;a++){
      printf("the value of a is %d  \n",a);
  }      */
  
  // a case of decremnetry for LOOP
   /*  for(int i=5;i;i--){    // this for loop will run till i less than 0
         printf("the value of i is %d \n",i);     
     }   */
     
     // quiz- write a program to print n natural no in reverse order
  /*    int n;
      printf("enter the value of n  \n");
      scanf("%d",&n);
      for(int i =n;i;i--)   {
          printf("the value of i is %d \n",i);
      }     */
      
      // the break statement in c
  /*    int i=0;
      do{
          printf("the value of i is %d  \n",i);
          if(i==4){
              break;
          }
          i++;
      }
      while(i<10);    */
      
      // the continue statemnet in c
    /*  int skip=5;
      int i = 0;
      while(i<10){
          i++;
          if(i!=5){    // here in comas not put any space oyherwise code will not run
          continue;  }
          else {
              printf("%d",i);
          }
      }     */ 
    return 0;
}










