#include<stdio.h>
int main()
{
	int a=1,sum=0,n;
	printf("Enter a number up to which sum is to be found ouyt:");
	scanf("%d",&n);
	while(a<=n)
	{
		sum=sum+a;
		a=a+2;
	}
	printf("The sum is:%d",sum);
	return 0;
}
