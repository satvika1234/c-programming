#include<stdio.h>
void main()
{
int age,salary;
printf("enter your age:");
scanf("%d",&age);
printf("enter your salary:");
scanf("%d",&salary);
if(age>=50){
if(salary>=60000){
salary=0.05*salary+salary;
printf("the incremented salary is %d",salary);
}
else{
salary=0.1*salary+salary;
printf("the incremented salary is %d",salary);
}
}
else{
salary=0.03*salary+salary;
printf("the incremented salary is %d",salary);
}
}
