#include<stdio.h>
#include<conio.h>
//avergae of 2darray
main()
{
  int i,j,a[3][3];
  float sum=0,avg;
  clrscr();

  for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
        {
          printf("a[%d][%d] is ",i,j);
          scanf("%d", &a[i][j]);
          sum=sum+a[i][j];
        }
    }
  avg = sum/9;
  printf("avg of array is %.2f", avg);

    getch();
}
