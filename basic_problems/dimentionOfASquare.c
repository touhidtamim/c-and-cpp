#include <stdio.h>

int main() {
    int size = 4; 
    int i = 1;

    while (i <= size) {
        int j = 1;
        while (j <= size) {
            printf("%d ", j);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}