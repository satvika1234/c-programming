#include <stdio.h>
void main(){
int a,b,c;
printf("enter the three angles of a triangle:");
scanf("%d%d%d", &a,&b,&c);
if(a+b+c==180){
printf("the triangle is valid");
}
else
{
printf("the triangle is not valid");
}
}