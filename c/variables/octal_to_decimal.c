//Print decimal equivalent of a octal.

#include <stdio.h>

int main() {
    int octalNum;

    printf("Enter an octal number: ");
    scanf("%o", &octalNum);

    printf("Decimal equivalent: %d\n", octalNum);

    return 0;
}