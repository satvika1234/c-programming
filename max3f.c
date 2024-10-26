#include <stdio.h>

int findMax(int num1, int num2, int num3) {
    int max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }
    return max;
}

int main() {
    int a = 10, b = 20, c = 15;
    int maximum = findMax(a, b, c);
    printf("The maximum of %d, %d, and %d is: %d\n", a, b, c, maximum);
    return 0;
}
