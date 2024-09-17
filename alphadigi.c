#include<stdio.h>
void main()
{
char ca;
printf("enter a character:");
scanf("%d",&ca);
if(ca>='A'&&ca<='Z'||ca>='a'&&ca<='z')
{
printf("the entered character is a alphabet");

}
else if(ca>='0'&&ca<='9')
{
printf("the entered character is a digit");
}
else
{
printf("the entered character is a special character");
}
}