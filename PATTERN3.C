#include<stdio.h>
#include<conio.h>

/*
5
44
333
2222
11111
*/
main()
{
 int i,j;
 clrscr();

 for (i=5;i>=1;i--)
 {
   for (j=i;j<=5;j++)
   {
     printf("%d ",i);
   }
   printf("\n");
 }
 getch();
}