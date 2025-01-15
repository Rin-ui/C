#include <stdio.h>
#include <string.h>

void count_characters_and_print(const char *str) {
    int count = strlen(str);  // Counting the number of characters in the string
    printf("Number of characters: %d\n", count);
    
    // Printing each character
    printf("Characters in the string:\n");
    for (int i = 0; i < count; i++) {
        printf("%c\n", str[i]);
    }
}

int main() {
    const char *str = "Hello";
    count_characters_and_print(str);
    return 0;
}
