//swap
#include<stdio.h>
void swap(int x,int y);
void main(){
int a,b;
printf("enter a and b:");
scanf("%d%d",&a,&b);
printf("the given numbers a and b are:",a,b);
printf("the swaped numbers a and b are:",swap(a,b));
}
void swap(int x,int y){
int t;
t=x;
x=y;
y=t;
printf("%d%d",x,y);
}
