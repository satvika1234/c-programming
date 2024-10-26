#include<stdio.h>
void main(){
int n,i=1,j;
printf("enter a number");
scanf("%d",&n);
while(i<=n){
j=n;
   while(j>=i){
     printf("*");
    j--;
}
printf("\n");
i++;
}
}