#include<stdio.h>

int main()
{
	int amt_wtr;
	float cost;
	printf("Enter the amount of water used in cubic feet:");
	scanf("%d",&amt_wtr);
	if(amt_wtr<=1000)
	{
		cost = 15;		
	}
	else if((amt_wtr>1000)&&(amt_wtr<=2000))
	{
		cost = 15 + ((amt_wtr-1000)*0.0175);
	}
	else if((amt_wtr>2000)&&(amt_wtr<=3000))
	{
		cost = 15 + ((amt_wtr-2000)*0.02);
	}
	else
	{
		cost = 70;
	}
	printf("The cost for the water usage is:$%f",cost);
}