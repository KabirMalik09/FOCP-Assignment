#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of the array : ");
    scanf("%d", &n);

    int arr[n];
    int i , x , pos;

    for (i=0 ; i<n ; i++)
        arr[i] = i + 1;
    
    for(i=0 ; i<n ; i++){
        printf("%d",arr[i]);
    }
    printf("\n");

    printf("Enter the value to be inserted: ");
    scanf("%d", &x);

    printf("\n enter the position at which to be inserted : ");
    scanf("%d", &pos);

    for(i=n-1 ; i>=pos ; i--)
        arr[i] = arr[i-1];

    arr[pos-1] = x;

    for(i=0 ; i<n ; i++)
        printf("%d", arr[i]);
    printf("\n");

    return 0;
}
