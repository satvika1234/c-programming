#include<stdio.h>
void main(){
int week_no;
printf("enter the week number:");
scanf("%d",&week_no);
if (week_no==1){
printf("sunday");}
else if(week_no==2){
printf("monday");
}
else if(week_no==3){
printf("tuesday");
}
else if(week_no==4){
printf("wednesday");
}
else if(week_no==5){
printf("Thursday");
}
else if(week_no==6){
printf("friday");
}
else if(week_no==7){
printf("saturday");
}
else{
    printf("invalid week number");
}
}
