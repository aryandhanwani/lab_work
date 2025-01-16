#include <stdio.h>
#include<conio.h>
main()
{
	int i,j,a[3][3]={{2,4,1},
					 {3,5,4},
					 {8,2,6}};
	int sum=0;
    clrscr();
    
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if((i==0 && j==2)||(i==1 && j==1)||(i==2 && j==0))
			{
				printf("%d", a[i][j]);
				sum=sum+a[i][j];
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
		
		
	}
	printf("the sum anti-diagonal array is = %d",sum);
	
	getch();
}
