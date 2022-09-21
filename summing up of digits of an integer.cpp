#include <stdio.h>
#include <conio.h>
int main()
{
	int num, sum=0, rem;
	printf("ENTER THE NUMBER:");
	scanf("%d",&num);
	while (num>0)
	{
		rem = num%10;
		sum = sum + rem;
		num= num / 10;
	}
	printf("The sum of digit of the given number: %d", sum);
	return 0;
}