#include <stdio.h>

void decimal_to_binary(int n) {
    for (int i = 31; i >= 0; i--) {  // Assuming a 32-bit integer
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    int decimalNum = 10;
    printf("Decimal: %d => Binary: ", decimalNum);
    decimal_to_binary(decimalNum);
    return 0;
}
