// check whether given number is positive , negative and zero

#include <stdio.h>

int main (){

    int num ;

    printf("enter an number:");
    scanf ("%d", &num);

    if (num > 0){
        printf("num is positive");
    }

    else if (num < 0){
        printf ("num is negative");
    }

    else  {
         printf ("num is zero");
    }

    return 0;
}
