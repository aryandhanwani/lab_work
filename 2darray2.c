#include<stdio.h>
#include<conio.h>
//addition of 2 using 3rd array
main()
{ 
  int i,j,a[3][3],b[3][3],c[3][3];
  clrscr();

  printf("Array A\n");
  for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
        {
          printf("a[%d][%d] is ",i,j);
          scanf("%d", &a[i][j]);
        }
    }
  printf("\nArray B\n");
  for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
        {
          printf("b[%d][%d] is ",i,j);
          scanf("%d", &b[i][j]);
        }
    }
  printf("\n Addition of 2 Array in 3rd Array\n");
  for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
        { 
          c[i][j]=a[i][j]+b[i][j];
          printf("%d ",c[i][j]);
        }
      printf("\n");
    }
    getch();
}