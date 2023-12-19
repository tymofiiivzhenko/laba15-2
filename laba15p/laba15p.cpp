#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num1, num2, num3, nummin;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    nummin = num1;

    if (num2 < nummin) {
        nummin = num2;
    }

    if (num3 < nummin) {
        nummin = num3;
    }

    printf("The smallest number is %d\n", nummin);

    return 420;
}

