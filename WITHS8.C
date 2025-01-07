#include<stdio.h>
#include<conio.h>

/* WAP to to find the pattern given below using nested for loop
1234554321
1234  4321
123    321
12      21
1        1
1        1
12      21
123    321
1234  4321
1234554321
*/

main()
{
 int i,j,k,l;
 clrscr();

 for (i=5;i>=1;i--)
 {
  for(j=1;j<=i;j++)
   {
     printf("%d", j);
   }
   for(k=i;k<5;k++)
   {
     printf("  ");
   }
   for(l=i;l>=1;l--)
   {
     printf("%d", l);
   }
   printf("\n");
 }
 for (i=1;i<=5;i++)
 {
  for(j=1;j<=i;j++)
   {
     printf("%d", j);
   }
   for(k=i;k<5;k++)
   {
     printf("  ");
   }
   for(l=i;l>=1;l--)
   {
     printf("%d", l);
   }
   printf("\n");
 }
 getch();
}