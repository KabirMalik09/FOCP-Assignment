#include<stdio.h>
int main()
{
	int i,n,c=0,t;
	printf("enter no. of students : ");
	scanf("%d", &n);
	 
	 int marks[n];
	 for(i=0 ; i<n ; i++)
	 {
	 	printf("enter the marks of %d student : ", i+1);
	 	scanf("%d" , &marks[i]);
	 	
	 	t=marks[0];
	 }
	
	for(i=0 ; i<n ; i++)
	{
		if (marks[i]>c){
			c=marks[i];
		}
		if (marks[i]<t){
			t=marks[i];
		}
		 
		}
		printf("the maximum marks of student : %d\n",c); 	
	printf("the minimum marks of student : %d\n",t);
	
	return 0;
}
