//factorial recursion
#include<stdio.h>
int factorial(int k);
void main(){
int x;
printf("enter x:");
scanf("%d",&x);
printf("the factorial of %d is %d",x,factorial(x)); 
}
int factorial(int k){
if(k==0||k==1){
return 1;
}
else{
return k*factorial(k-1);
}
}