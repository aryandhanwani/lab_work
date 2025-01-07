#include<stdio.h>
#include<conio.h>

/* WAP to to find the pattern given below using nested for loop
10101
 0101
  101
   01
    1*/

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
    if(j%2==0)
    {
    printf("0");
    }
    else
    {
      printf("1");
    }
   }
   printf("\n");
 }
 getch();
}