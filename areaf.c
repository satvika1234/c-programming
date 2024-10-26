#include<stdio.h>
int area(int a);
int perimeter();
int l;
void main(){
printf("enter length :");
scanf("%d",&l);
area(l);
perimeter();
}
int area(int a){
printf("the area of square is %d\n",a*a);
}
int perimeter(){
printf("the perimeter of square is %d",4*l);
}
