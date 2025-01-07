#include<stdio.h>
#include<conio.h>

/* WAP to to find the pattern given below using nested for loop
    1
   21
  321
 4321
54321
*/
main()
{
 int i,j,k;
 clrscr();

 for (i=1;i<=5;i++)
 {
   for(k=5;k>i;k--)
   {
     printf(" ");
   }
   for(j=i;j>=1;j--)
   {
     printf("%d", j);
   }
   printf("\n");
 }
 getch();
}