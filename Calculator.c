#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;

    while (1) {
       
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;

            case 2: 
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;

            case 3: 
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;

            case 4: 
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Division by zero is undefined.\n");
                }
                break;

            case 5: 
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if (num1 >= 0) {
                    result = sqrt(num1);
                    printf("Square Root: %.2lf\n", result);
                } else {
                    printf("Error: Square root of a negative number is undefined.\n");
                }
                break;

            case 6: 
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if (num1 > 0) {
                    result = log10(num1);
                    printf("Log : %.2lf\n", result);
                } else {
                    printf("Error: Logarithm of non-positive numbers is undefined.\n");
                }
                break;

            default:
                printf("Invalid choice.\n");
                break;
        }
        printf("\n");
    }

    return 0;
}

