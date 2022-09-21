#include<stdio.h>
#include<math.h>
int main()
{
	int num=0,i,rem,x,sum=0,n;
	printf("Enter the number of digits:");
	scanf("%d",&x);
	printf("Enter the number:");
	scanf("%d",&num);
	n=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum+int(pow(double(rem),double(x)));
		num=num/10;
	}
	if(n==sum)
	{
		printf("The given number is an armstrong");
    }
    else
    {
    	printf("The given number is not an armstrong number");
	}
	return 0;
}