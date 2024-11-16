#include <stdio.h>

int main() {
    int i, j, space, value;

    for(i = 1; i <= 4; i++) {
    	
        
        for(space = 1; space <= (4 - i); space++) 
		{
            printf(" ");
        }

         
        value = 1; 
		 
        for(j = 1; j <= i; j++)
		 {
            printf("%2d", value);
            
            value = value * (i - j) / (j);  
		
        }
        
        printf("\n");
    }

    return 0;
}

