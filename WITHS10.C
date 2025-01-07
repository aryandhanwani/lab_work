#include<stdio.h>
#include<conio.h>

/* WAP to to find the pattern given below using nested for loop
    1
   121
  12321
 1234321
123454321

*/

main()
{
 int i,j,k,l;
 clrscr();

 for (i=1;i<=5;i++)
 {
   for(k=5;k>i;k--)
   {
     printf(" ");
   }
   for(j=1;j<=i;j++)
   {
     printf("%d", j);
   }
   for(l=i-1;l>=1;l--)
   {
     printf("%d", l);
   }
   printf("\n");
 }
 getch();
}