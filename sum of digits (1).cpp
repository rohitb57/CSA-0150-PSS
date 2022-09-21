#include<stdio.h>

int main()
{
	int num,sum=0,rem,n;
	
	printf("Enter the number:");
	scanf("%d",&num);
	n = num;
	while(num>0)
	{
		rem  = num %10;
		sum = sum + rem;
		num = num/10;
		
	}
	
	printf("The sum of the digits of the given number %d is: %d",n,sum);
	return 0;
	
}