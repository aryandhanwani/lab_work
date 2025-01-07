#include<stdio.h>
#include<conio.h>

/* WAP to to find the pattern given below using nested for loop
54321
 4321
  321
   21
    1
*/
main()
{
 int i,j,k;
 clrscr();

 for (i=5;i>=1;i--)
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