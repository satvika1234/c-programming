#include<stdio.h>
int main()
{
int z;
    printf("enter a number:");
    scanf("%d",&z);
    if(z%5==0&&z%11==0)
    {
        printf("the entered number is divisible by 5 and 10");

    }
    else
    {
        printf("the entered number is not divisible by 5 and 10");
    }
}