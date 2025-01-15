#include <stdio.h>

// Function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;

    // Input a number
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if the input is valid
    if (n < 0) {
        printf("Factorial of a negative number is not defined.\n");
    } else {
        // Print the result
        printf("Factorial of %d = %llu\n", n, factorial(n));
    }

    return 0;
}
