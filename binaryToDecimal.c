#include <stdio.h>
#include <string.h>

int binary_to_decimal(const char *binary_str) {
    int decimal_num = 0;
    int base = 1;  // Base is 2^0 initially

    int len = strlen(binary_str);
    for (int i = len - 1; i >= 0; i--) {
        if (binary_str[i] == '1') {
            decimal_num += base;
        }
        base = base * 2;
    }

    return decimal_num;
}

int main() {
    const char *binary_str = "1010";
    int decimal_num = binary_to_decimal(binary_str);
    printf("Binary: %s => Decimal: %d\n", binary_str, decimal_num);
    return 0;
}
