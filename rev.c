#We can reverse a number in c using loop and arithmetic operators. 
#In this program, we are getting number as input from the user and reversing that number.
#Let's see a simple c example to reverse a given number.
#include<stdio.h>  
 int main()    
{    
int n, reverse=0, rem;    
printf("Enter a number: ");    
  scanf("%d", &n);    
  while(n!=0)    
  {    
     rem=n%10;    
     reverse=reverse*10+rem;    
     n/=10;    
  }    
  printf("Reversed Number: %d",reverse);    
return 0;  
}   
