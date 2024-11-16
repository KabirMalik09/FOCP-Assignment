#include<stdio.h>
int main()
{
	int n , count = 0;
	
	printf("enter the number of student : ");
	scanf("%d",&n);
	
	int marks[n],i;
	
	printf("enter the marks of each student :\n ");
	for ( i = 0 ; i < n ; i++){
		printf("student %d : ", i + 1);
		scanf("%d", &marks[i]);
	}
	
	
	
	for (i=0 ; i<n ; i++){
		if (marks[i]==99){
			printf("student %d scored 99 : \n", i+1);
			count++;
		}
	}
		if (count == 0)
		{
			printf("none scored 99.\n");
		}  	 else 
		{
			printf("total number of students who scored 99 : %d\n", count);
		}
	return 0;
}
