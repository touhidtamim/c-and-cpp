//Declare a float variable for the radius of a circle, initialize it with value 5.0, and calculate its area. Use a constant for Pi (3.14159).

#include <stdio.h>

#define PI 3.14159

int main() {
    float radius = 5.0f;
    float area = PI * radius * radius;

    printf("The area of a circle with radius %.2f is %.2f\n", radius, area);

    return 0;
}