#include<stdio.h>
int main()
{
	 int num,rem,sum=0;
	 printf("Enter a number:");
	 scanf("%d",&num);
	 while(num>0)
	 {
	 	rem = num % 10;
	 	sum = sum + rem;
	 	num = num/10;
	 }
	 printf("The sum of digits of the given number is: %d",sum);
	 return 0;
}    