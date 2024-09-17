//finding the maximum of two numbers

#include<stdio.h>
int main(){
int num1,num2;
printf("enter the 1st number:");
scanf("%d",&num1);
printf("enter the 2nd number:");
scanf("%d",&num2);
if(num1>num2){
printf("the maximum of the number is:%d",num1);
}
else
{
printf("the maximum of the number is:%d",num2);
}
}