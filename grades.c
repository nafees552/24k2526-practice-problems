#include<stdio.h>
int main()
{
	int n;
	printf("Enter the marks to evaluate the grades: ");
	scanf("%d", &n);
	if(n>=90)
	printf("A grade");
	else if(n>=80&&n<90)
	printf("B grade");
	else if(n>=70&&n<80)
	printf("C grade");
	else if(n>=60&&n<70)
	printf("D grade");
	else if(n<60)
	printf("E grade");
	else
	printf("Failed");
	
	
}