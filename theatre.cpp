#include<stdio.h>

int main()
{
	int age,fare;
	printf("Enter the age:");
	scanf("%d",&age);
	
	if(age<3)
	{
		fare = 0;
		printf("Fare is free\n");
	}
	else if((age>=3)&&(age<13))
	{
		fare = 5;
	}
	else if((age>=13)&&(age<21))
	{
		fare = 10;
	}
	else if((age>=21)&&(age<55))
	{
		fare = 15;
	}
	else
	{
		fare = 10;
	}
	printf("The fare is: $%d\n",fare);
}