#include<stdio.h>
int main()
{
int n,i,x;
printf ("enter the size of array:");
scanf ("%d", &n);

int nums[n];

for (i=0 ; i < n ; i++)
{
    printf ("enter %d number:", i+1); 
    scanf ("%d", &nums [i]);
}
printf ("array: ");
 for (i=0 ; i<n ; i++)
 {
printf ("%d,", nums [i]);
 }

x = nums [n-1];


for (i=n-1 ; i>0 ; i--)
{
nums[i] = nums[i - 1];
}
nums [0]=x;

printf(" the updated array is: ");
for (i=0 ; i < n ; i++)
{
printf("%d,", nums[i]);
}
return 0;
}



