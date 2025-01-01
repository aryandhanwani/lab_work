#include<stdio.h>
#include<conio.h>

main()
{
 int i,pass,n; // i enterd number pass is original pass. and N is for user input
 clrscr();

 again:
 pass=12345;

 printf("enter the password : ");
 scanf("%d",&n);


 for (i=n; i<=pass ; i++)
 {
  if(i==pass)
  {
    printf("the password is correct");
    break;
  }goto again;
 }
 for (i=n; i>pass ; i--)
 {
  goto again;
 }
 getch();
 }