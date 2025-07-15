#include <stdio.h>

void reverse() {
    int num, rev = 0, digit;

    printf("\nEnter a number to reverse: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    printf("Reversed number: %d\n", rev);
}

