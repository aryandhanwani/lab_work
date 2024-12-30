#include<stdio.h>
#include<conio.h>

main()
{
  int i,n;
  clrscr();

  printf("enter the number:");
  scanf("%d", &n);

  i=n;
  while(i>=1)
  {
    if(i%2==1)
    {
     printf("%d\t", i);
    }
    i--;
  }
  getch();
}