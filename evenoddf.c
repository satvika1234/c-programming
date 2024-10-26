#include<stdio.h>
void evenodd(int x);
int a;
void main(){
printf("enter a:");
scanf("%d",&a);
evenodd(a);
}
void evenodd(int x){
if(x%2==0){
printf("x is a even number");
}
else{
printf("x is a odd number");
}
}