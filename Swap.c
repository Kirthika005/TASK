#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter two values ");
	scanf("%d %d",&x,&y);
	printf("\nBefore Swapping x=%d y=%d",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\n");
	printf("After Swapping x=%d y=%d",x,y);
	return 0;
}
