#include <stdio.h>

int main() {
    int choice;
    float a, b, c;

    printf("Select any arithmetic operation:\n");
    printf("1. Addition\n");
    printf("2. Multiplication\n");
    printf("3. Subtraction\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (choice) {
        case 1:
            c = a + b;
            printf("%.2f + %.2f = %.2f\n", a, b, c);
            break;
        case 2:
            c = a * b;
            printf("%.2f * %.2f = %.2f\n", a, b, c);
            break;
        case 3:
            c = a - b;
            printf("%.2f - %.2f = %.2f\n", a, b, c);
            break;
        case 4:
            if (b != 0) { 
                c = a / b;
                printf("%.2f / %.2f = %.2f\n", a, b, c);
            } else {
                printf("Your value is infinite (division by zero).\n");
            }
            break;
        default:
            printf("xxxxxx Please select a number between 1-4.\n");
            break; 
    }
    
    return 0;
}

