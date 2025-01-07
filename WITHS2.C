#include<stdio.h>
#include<conio.h>

/* WAP to to find the pattern given below using nested for loop
    5
   45
  345
 2345
12345
*/
main()
{
 int i,j,k;
 clrscr();

 for (i=5;i>=1;i--)
 {
   for(k=1;k<i;k++)
   {
     printf(" ");
   }
   for(j=i;j<=5;j++)
   {
     printf("%d", j);
   }
   printf("\n");
 }
 getch();
}