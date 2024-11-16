#include <stdio.h>

int main() {
    int n = 6 , i , j;  

    for ( i = 0; i < n; i++) {
       
        for ( j = 0; j <= i; j++) {
            printf("%d", j % 2);
        }

       
        for (j = 0; j < 2 * (n - i - 1); j++) {
            printf(" ");
        }

        
        for ( j = 0; j <= i; j++) {
            printf("%d", j % 2);
        }

        printf("\n");
    }

    return 0;
}

