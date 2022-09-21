#include<stdio.h>
int main()
{
	int F0=0,F1=1,i,Fib,n;
	printf("Enter the no.of terms:");
	scanf("%d",&n);
	printf("%d %d ",F0,F1);
	for(i=2;i<=n;i++)
	{
	Fib=F0+F1;
	printf("%d ",Fib);
	F0=F1;
	F1=Fib;
	}
	return 0;
}