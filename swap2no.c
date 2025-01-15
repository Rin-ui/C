#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Print original values
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping logic
    temp = a;
    a = b;
    b = temp;

    // Print swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
