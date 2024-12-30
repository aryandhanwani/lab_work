#include<stdio.h>
#include<conio.h>

main()
{
 int m,n;
 clrscr();

 printf("enter the first year");
 scanf("%d", &m);
 printf("enter the last year");
 scanf("%d", &n);

 while(m<=n)
 {
  if(m%4==0)
  {
   printf("%d\t",m);
  }
 m++;
 }
 getch();
}