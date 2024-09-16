#include<stdio.h>
int main()
{
	int n;
	float d;
	printf("Enter your income: ");

	scanf("%d",&n);
	if(n<=250000)
	{
		printf("The total income is: %d", n);
		printf("No tax");
		printf("The net income after tax is:%d ", n);
	}
	else if(n>=250001&&n<=500000)
	{
		printf("The total income is: %d", n);
		printf("The tax is 5%");
		d=(n*0.95);
		printf("\nThe net income after tax is: %f", d);
	}
	else if(n>=500001&&n<=1000000)
	{
		printf("The total income is:%d ", n);
		printf("\nThe tax is 20%");
		d=(n*0.80);
		printf("\nThe net income after tax is: %f", d);
	}
	else if(n>=1000001)
	{
		printf("The total income is: %d", n);
		printf("\nThe tax is 30%");
		d=(n*0.70);
	}
	else
	printf("Invalid income");
}