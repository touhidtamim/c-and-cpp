#include <stdio.h>

// Function to calculate string length using a pointer
int getStringLength(const char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++; // Move the pointer to the next character
    }
    return length;
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        // Clean up trailing newline character if it exists
        int i = 0;
        while (str[i] != '\0') {
            if (str[i] == '\n') {
                str[i] = '\0';
                break;
            }
            i++;
        }
        
        int len = getStringLength(str);
        printf("Length of the string: %d\n", len);
    }
    
    return 0;
}