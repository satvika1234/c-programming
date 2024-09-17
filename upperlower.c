#include<stdio.h>
void main()
{
char cha;
printf("enter a character:");
scanf("%c",&cha);
if(cha>='A'&&cha<='Z')
{
printf("the entered character is in uppercase");

}
else
{
printf("the entered character s in lowercase");
}
}