 #include<stdio.h>
 void main()
 {
    char ch;
    printf("enter a character:");
    scanf ("%c",&ch);
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
        printf("%c  is a character",&ch);
    }
    else
    {
        printf("%c  is not a character",&ch);
    }
 }