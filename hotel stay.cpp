#include<stdio.h>

int main()
{
	int nop,age;
	float cost;
	char cho;
	printf("Enter the number of people:");
	scanf("%d",&nop);
	if(nop==2)
	{
		cost =85;
	}
	else if(nop==3)
	{
		cost = 90;
	}
	else if(nop==4)
	{
		cost = 95;
	}
	else
	{
		cost = 95 + (nop-4)*6;
	}
	
	printf("Enter the if the purpose of the stay is company business:");
	scanf("%c ",&cho);
	
	if(cho=='y')
	{
		cost = cost-(cost*0.2);
	}
	printf("Enter the age of the  customer:");
	scanf("%d ",&age);
	if(age>60)
	{
		cost = cost - (cost*0.15);
	}
	printf("The cost of the stay is: %f",cost);
}