#include <stdio.h>

int main() {
    int PersonA, personB, PersonC;
    scanf("%d %d %d", &PersonA, &personB, &PersonC);

    if (PersonA <= personB) {
        if (PersonA <= PersonC) {
            printf("%d is the youngest\n", PersonA);
        } else {
            printf("%d is the youngest\n", PersonC);
        }
    } else {
        if (personB <= PersonC) {
            printf("%d is the youngest\n", personB);
        } else {
            printf("%d is the youngest\n", PersonC);
        }
    }

    return 0;
}