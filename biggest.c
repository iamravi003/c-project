#include <stdio.h>

void biggest() {
    int a, b, c;
    printf("\nEnter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("Biggest: %d\n", a);
    else if (b >= a && b >= c)
        printf("Biggest: %d\n", b);
    else
        printf("Biggest: %d\n", c);
}

