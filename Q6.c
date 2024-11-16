#include<stdio.h>
int main()
{
	int x , y;
	
	printf(" enter the coordinates : ");
	scanf("%d%d",&x,&y);
	
	if (x>0 && y>0)
	printf(" This point  lies in 1st quadrant. ");
	
	else if(x<0 && y>0)
	printf(" This point lies in 2nd quadrant. ");
	
	else if (x<0 && y<0)
	printf(" This point  lies in 3rd quadrant. ");
	
	else if ( x>0 && y<0)
	printf(" This point  lies in 4th quadrant. ");
	
	else
	printf(" It is on axis ");
	
	return 0;
}
