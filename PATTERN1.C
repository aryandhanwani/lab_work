#include<stdio.h>
#include<conio.h>
/*
1
21
321
4321
54321
*/
main()
{
 int i,j;
 clrscr();

 for (i=1;i<=5;i++)
 {
   for (j=i;j>=1;j--)
   {
     printf("%d ",j);
   }
   printf("\n");
 }
 getch();
}