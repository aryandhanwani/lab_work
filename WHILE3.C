#include<stdio.h>
#include<conio.h>

//wap to find 1 to n number using while loop

main()
{
 int i,n;
 clrscr();


 printf("Enter the number : ");
 scanf("%d", &n);
 i = 1;

 while(i<=n)
 {
  printf("%d\t", i);
  i++;
 }
 getch();
}