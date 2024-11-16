#include<stdio.h>
int main()
{
    int n, k[100]={0},i,j,x;

    printf("enter the size of the array:");
    scanf("%d", &n);

    int nums [n];

    for (i=0 ; i < n ; i++)
    {
        printf ("enter number %d : ", i+1);
        scanf ("%d", &nums[i]);
    }
        printf("array : ");
        for (i=0 ; i < n ; i++)
        {
        printf("%d", nums[i]);
        }

        for (i=0 ; i < n ; i++)
        {
            x=nums [i];
            for (j = i+1 ; j < n ; j++)
            {
                 if (nums[j] == x)
                 {
                    k[j]=x; 
                    break;
                 }
            }
            
        }
        for(j=0 ; j<=n ; j++){
        if(k[j] !=0){
        printf("%d",k[j]);
        }
    }

    printf("\n");
    
    return 0;
}    