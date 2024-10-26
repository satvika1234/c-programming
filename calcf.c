#include<stdio.h>
int sum(int a,int b);
int difference(int a,int b);
int diff(int a,int b);
int mul(int a,int b);
float result;
void main(){
float x,y;
char op;
printf("enter x ,operator, y:");
scanf("%f%c%f",&x,&op,&y);
switch(op){
case'+':
result=sum(x,y);
printf("%f",result);
break;
case'-':
result=difference(x,y);
printf("%f",result);
break;
case'*':
result=mul(x,y);
printf("%f",result);
break;
case'/':
result=diff(x,y);
printf("%f",result);
break;
default:
printf("error");
}
}
int sum(int a,int b){
return a+b;
}
int difference(int a,int b){
return a-b;
}
int mul(int a,int b){
return a*b;
}
int diff(int a,int b){
return a/b;
}
