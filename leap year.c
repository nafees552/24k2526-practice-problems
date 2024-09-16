#include<stdio.h>
int main()
{
	int n;
	printf("Enter the year to check if its a leap year");
	scanf("%d", &n);
	if(n%400==0)
	{
		printf("The year is a leap year");
	}
	else if (n%4==0&&n%100!=0)
	{
		printf("The year is a leap year");
		
	}
	else
	printf("The year is not a leap year");
}