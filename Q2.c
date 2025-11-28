#include <stdio.h>

// Function to print an 8-bit binary number
void printBinary(int n) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
}

int main() {
    int num, shift;

    printf("Enter a number (0-255): ");
    scanf("%d", &num);

    printf("Enter number of positions to shift: ");
    scanf("%d", &shift);

    int leftShift  = num << shift;       // Left shift
    int rightShift = num >> shift;       // Right shift

    printf("\nOriginal number: %d | Binary: ", num);
    printBinary(num);

    printf("\n\nAfter Left Shift  (%d << %d) : %d | Binary: ", num, shift, leftShift);
    printBinary(leftShift & 0xFF);       // Mask to 8-bit display

    printf("\nAfter Right Shift (%d >> %d) : %d | Binary: ", num, shift, rightShift);
    printBinary(rightShift);

    printf("\n");

    return 0;
}
