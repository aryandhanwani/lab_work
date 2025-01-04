#include<stdio.h>
#include<conio.h>

/*
a
b a
c b a
d c b a
e d c b a*/

main()
{
 char i,j;
 clrscr();

 for (i='a';i<='e';i++)
 {
   for (j=i;j>='a';j--)
   {
     printf("%c ",j);
   }
   printf("\n");
 }
 getch();
}