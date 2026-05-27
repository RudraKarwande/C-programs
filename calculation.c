#include <stdio.h>
#include "calculation.h"

int main() {

    int ino1, ino2;
    int ians;
    int num, deno;

    printf("Enter two numbers: ");
    scanf("%d %d", &ino1, &ino2);

    ians = addition(ino1, ino2);
    printf("Addition is : %d\n", ians);

    printf("Subtraction is : %d\n",
           subtraction(ino1, ino2));

    printf("Multiplication is : %d\n",
           multiplication(ino1, ino2));

    printf("For division\n");

    printf("Enter numerator: ");
    scanf("%d", &num);

    printf("Enter denominator: ");
    scanf("%d", &deno);

    printf("Division is : %d\n",
           division(num, deno));

    ians = modulus(ino1, ino2);
    printf("Remainder is : %d\n", ians);

    return 0;
}
