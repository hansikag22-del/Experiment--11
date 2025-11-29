#include <stdio.h>

int main() {
    int n, p;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Enter positions to shift: ");
    scanf("%d", &p);

    printf("\nLeft Shift (%d << %d) = %d", n, p, n << p);
    printf("\nRight Shift (%d >> %d) = %d\n", n, p, n >> p);

    return 0;
}

