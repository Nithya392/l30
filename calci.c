#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main() {
    int choice, num1, num2;

    printf("Simple Calculator \n");
    printf("Choose 1-4 options to perform operations\n");
    printf("1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

   
