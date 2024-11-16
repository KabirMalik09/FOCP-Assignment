#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long binary);
long long decimalToBinary(int decimal);

int main() {
    int choice;
    printf("Choose an option:\n");
    printf("1. Convert Binary to Decimal\n");
    printf("2. Convert Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        long long binary;
        printf("Enter a binary number: ");
        scanf("%lld", &binary);
        printf("Decimal: %d\n", binaryToDecimal(binary));
    } else if (choice == 2) {
        int decimal;
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        printf("Binary: %lld\n", decimalToBinary(decimal));
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}


int binaryToDecimal(long long binary) {
    int decimal = 0, i = 0, remainder;
    while (binary != 0) {
        remainder = binary % 10;
        binary /= 10;
        decimal += remainder * pow(2, i);
        ++i;
    }
    return decimal;
}


long long decimalToBinary(int decimal) {
    long long binary = 0;
    int remainder, i = 1;
    while (decimal != 0) {
        remainder = decimal % 2;
        decimal /= 2;
        binary += remainder * i;
        i *= 10;
    }
    return binary;
}
