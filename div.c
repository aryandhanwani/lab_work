#include<stdio.h>


void div(int a, int b)
{
	int i;
	printf("enter the number ");
	scanf("%d", &i);
	
	if(i%3==0 && i%5==0)
	{
		printf("15 is divisible by 3 and 5");
	}
	else
	{
		printf("15 is not divisble by 3 and 5");
	}
}
void main()
{
	div(3,5);
}
