#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=6;i++)
	{
		for(j=0;j<i*2;j++)
		{
			printf("%d",j%2);
		}
		printf("\n");
	}
return 0;	
	
}
