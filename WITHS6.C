#include<stdio.h>
#include<conio.h>

/* WAP to to find the pattern given below using nested for loop
54321
 5432
  543
   54
    5
*/

main()
{
 int i,j,k;
 clrscr();

 for (i=1;i<=5;i++)
 {
   for(k=1;k<i;k++)
   {
     printf(" ");
   }
   for(j=5;j>=i;j--)
   {
     printf("%d", j);
   }
   printf("\n");
 }
 getch();
}