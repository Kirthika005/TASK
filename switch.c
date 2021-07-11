#include<stdio.h>
int main()
{
	int number;
	printf("Enter any number from 1 to 5:");
	scanf("%d",&number);
	
	switch(number)
	{
		case 1:
			printf("Food Item - Pizza\n");
			printf("Prize - Rs.239\n");
			break;
		case 2:
			printf("Food Item - Burger\n");
			printf("Prize - Rs.150\n");
			break;
		case 3:
			printf("Food Item - French Fries\n");
			printf("Prize - Rs.100\n");
			break;
		case 4:
			printf("Food Item - Pasta\n");
			printf("Prize - Rs.179\n");
			break;
		case 5:
			printf("Food Item - Sandwich\n");
			printf("Prize - Rs.120\n");
			break;
		default:
			printf("Invalid number");
			
	}
	return 0;
}
