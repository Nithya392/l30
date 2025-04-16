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

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    switch (choice) {
        case 1:
            printf("Result: %d\n", add(num1, num2));
            break;
        case 2:
            printf("Result: %d\n", subtract(num1, num2));
            break;
        case 3:
            printf("Result: %d\n", multiply(num1, num2));
            break;
        case 4:
            if (num2 == 0)
                printf("Error! Division by zero is not allowed.\n");
            else
                printf("Result: %.2f\n", divide(num1, num2));
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
   
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}


