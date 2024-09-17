//2.finding the max between three numbers
#include<stdio.h>
int main(){
int num1,num2,num3;
printf("enter the 1st number:");
scanf("%d",&num1);
printf("enter the 2nd number:");
scanf("%d",&num2);
printf("enter the 3rd number:");
scanf("%d",&num3);
if(num1>num2&&num1>num3){
printf("maximum of the three numbers is:%d",num1);
}
else if(num2>num1&&num2>num3){
printf("maximum of the three numbers is:%d",num2);
}
else{
printf("maximum of the three numbers is:%d",num3);

}

}
