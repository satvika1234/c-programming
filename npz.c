#include<stdio.h>
int main()
{
int a;
printf("enter a number:");
scanf("%d",&a);
if(a>0)
{
printf("the entered number is positive");
}
else if(a<0)
{
printf("the entered number is negative");
}
else
{
printf("the entered number is zero");
}
}
