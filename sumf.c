#include<stdio.h>
int sum();
int x,y;
void main(){

printf("enter x and y");
scanf("%d %d",&x,&y);
sum();


}

int sum(){
int result=x+y;
printf("the sum is:%d",result);

}