#include<stdio.h>
int main()
{
	int n ;
	
	printf("enter the number of scores : ");
	scanf("%d",&n);
	
	int scores[n],i;
	
	printf("enter the scores :\n ");
	for ( i = 0 ; i < n ; i++){
		printf("score %d : ", i + 1);
		scanf("%d", &scores[i]);
	}

    
    printf("\nChecking whether each score is even or odd:\n");
    for(i = 0; i < n; i++) {
        if(scores[i] % 2 == 0) {
            printf("Score %d (%d) is even.\n", i + 1, scores[i]);
        } else {
            printf("Score %d (%d) is odd.\n", i + 1, scores[i]);
        }
    }
    return 0;
}

