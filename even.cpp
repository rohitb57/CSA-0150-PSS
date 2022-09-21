#include<stdio.h>
int main()
{
	int i,n;
	printf("\nENTER A NUMBER: ");
	scanf("%d",&n);
	printf("\nEVEN NUMBERS BETWEEN 1 AND %d ARE: \n",n);
	for(i=1; i<=n; i++)
	{
		if(i%2==0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}