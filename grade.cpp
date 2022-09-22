#include<stdio.h>

int main()
{
	int sum=0,nos,i,mark;
	float avg;

	
	printf("Enter the number of subjects:");
	scanf("%d",&nos);
	
	for(i=0;i<nos;i++)
	{	
		printf("Enter the marks:");
		scanf("%d",&mark);
		if((mark<=100)&&(mark>=90))
		{
			sum = sum + 5;	
		}
		else if((mark<90)&&(mark>=80))
		{
			sum = sum + 4;	
		}
		else if((mark<80)&&(mark>=70))
		{
			sum = sum + 3;	
		}
		else if((mark<70)&&(mark>=60))
		{
			sum = sum + 2;	
		}
		else if((mark<60)&&(mark>=50))
		{
			sum = sum + 1;	
		}
		
		
		

}
	avg=sum/nos;
	printf("The CGPA is: %.2f",avg);
	return 0;
}
