#include <stdio.h>

// Function to print binary form of an integer
void printBinary(int n) {
    for (int i = 7; i >= 0; i--) {   // printing 8-bit binary
        printf("%d", (n >> i) & 1);
    }
}

int main() {
    int a, b;

    printf("Enter first number (0-255): ");
    scanf("%d", &a);

    printf("Enter second number (0-255): ");
    scanf("%d", &b);

    printf("\nBinary of %d: ", a);
    printBinary(a);

    printf("\nBinary of %d: ", b);
    printBinary(b);

    // Bitwise AND
    int andResult = a & b;

    // Bitwise OR
    int orResult = a | b;

    // Bitwise NOT (on a only)
    int notResult = ~a & 0xFF;    // mask to show 8-bit result

    printf("\n\n=== Bitwise Operations ===");

    printf("\nAND  (a & b): %d | Binary: ", andResult);
    printBinary(andResult);

    printf("\nOR   (a | b): %d | Binary: ", orResult);
    printBinary(orResult);

    printf("\nNOT  (~a)   : %d | Binary: ", notResult);
    printBinary(notResult);

    printf("\n");

    return 0;
}
