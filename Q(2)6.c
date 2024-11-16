#include<stdio.h>
int main()
{
	int n ;
	float sum = 0.0, avg;
	
	printf("enter the number of student : ");
	scanf("%d",&n);
	
	int marks[n],i;
	
	printf("enter the marks of each student :\n ");
	for ( i = 0 ; i < n ; i++){
		printf("student %d : ", i + 1);
		scanf("%d", &marks[i]);
		
		 sum += marks[i];
		
	}
	 avg = sum/n;
	 
		printf("avg of the numbers is : %.2f \n ",avg);
		
		return 0;
	
}
