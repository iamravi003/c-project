#include <stdio.h>

void factorial() {
    int n;
    unsigned long long fact = 1;

    printf("\nEnter a number to find factorial: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial not defined for negative numbers.\n");
        return;
    }

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial of %d = %llu\n", n, fact);
}

