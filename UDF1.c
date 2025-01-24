#include <stdio.h>

void sum(int a)
{
	int cube = a*a*a;
	
	printf("the cube of %d is %d\n", a,cube);
}

void main()
{
	sum(3);
	sum(10);
	sum(20);
	sum(4);
	
}
