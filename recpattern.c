#include<stdio.h>
void main(){
int num,i,j,col;
printf("enter num and col where2<=num<=10:");
scanf("%d %d",&num,&col);
for(int i=1;i<=num;i++){
if(i==1||i==num){
int j=0;
while(j<col){
printf("*");
j++;
}
printf("\n");

}
else{
int j=1;
while(j<=col){
if(j==1||j==col){
printf("*");
}
else{
printf(" ");
}
j++;
}
printf("\n");
}
}

}