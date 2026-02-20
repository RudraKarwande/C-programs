#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    if (a > b) {
        printf("First number is greater.\n");
    }
    else if (a < b) {
        printf("Second number is greater.\n");
    }
    else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}

