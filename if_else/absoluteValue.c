#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer number: ");
    scanf("%d", &n);

    if (n < 0) {
        n = -n;
    }

    printf("The Absolute value is: %d\n", n);

    return 0;
}