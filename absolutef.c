#include <stdio.h>

int absoluteValue(int x) {
    if (x < 0) {
        return -x;
    }
    else{
return x;
}
}

void main() {
    int num ;
printf("enter num:");
scanf("%d",&num);
    int absValue = absoluteValue(num);
    printf("The absolute value of %d is: %d\n", num, absValue);
    
}
