#include<stdio.h>
void main()
{
int n;
 printf("enter a number :");
 scanf("%d",&n);
if(n>0)
{

 if(n%2==0)
{
  printf("the entered number is positive and even");
}
else
{
printf("the number is positive and odd");
}
}
else{
printf("the entered number is negative");
}
}