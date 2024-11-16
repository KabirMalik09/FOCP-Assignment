#include <stdio.h>

int subtract(int a, int b) {
    return a + (~b + 1);
}

int main() {
    int num1, num2, result;

    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);

    result = subtract(num1, num2);
    
    printf("Result of %d - %d = %d\n", num1, num2, result);

    return 0;
}