#include<stdio.h>
#include<conio.h>
//print border numbers from a 5*5 2darray

main()
{ 
  int i,j,a[5][5];
  clrscr();

  for(i=0;i<5;i++)
    {
      for(j=0;j<5;j++)
        {
          printf("a[%d][%d] is ",i,j);
          scanf("%d", &a[i][j]);
        }
    }
  for(i=0;i<5;i++)
    {
      for(j=0;j<5;j++)
        {
          (i==0 || i==4 || j==0 || j==4)
            ?printf("%d",a[i][j])
            :printf(" ");
        }
      printf("\n");
    }
    getch();
}