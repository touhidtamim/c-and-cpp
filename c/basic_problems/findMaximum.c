#include <stdio.h>

// Function to find the maximum value using pointer arithmetic
int findMaximum(const int *arr, int size) {
    int max = *arr; // Initialize max with the first element
    
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

int main() {
    int n;
    
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxElement = findMaximum(arr, n);
    printf("The maximum element in the array is: %d\n", maxElement);

    return 0;
}