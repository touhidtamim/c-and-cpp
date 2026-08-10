//Write a C program that declares two integer variables, assigns them values, and prints their sum, difference, product, and quotient.

#include <stdio.h>

int main() {
    int num1 , num2; 

    scanf("%d %d", &num1, &num2);
    
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int quotient = num1 / num2;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);

    return 0;
} 



//Write a C program that declares two float variables and computes their sum, difference, and product. Print the results with two decimal places.

#include <stdio.h>

int main() {
    float f1,f2 ;

    scanf("%f %f", &f1, &f2);

    float sum = f1 + f2;
    float difference = f1 - f2;
    float product = f1 * f2;

    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", difference);
    printf("Product: %.2f\n", product);

    return 0;
}