#include<stdio.h>
int main()
{
    int i,n,c,flag=0;
    printf("enter no. of elements : ");
    scanf("%d",&n);

    int num[n];
    for(i=0 ; i<n ; i++){
        printf("enter %d elements : ");
        scanf("%d",&num[i]);
    }

    for(i=0 ; i<n ; i++){
        if((num[i]>num[i-1]) && (num[i]>num[i+1])){
            printf("the peak element is %d\n",num[i]);
            flag++;
        }
        
    }
    if(flag==0){
        printf("there is no peak element.");
    }
    else{
        printf("there is %d peak elements.");
    }

    return 0;

}