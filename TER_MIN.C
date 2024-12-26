#include<stdio.h>
#include<conio.h>

main()
{
 int a,b,c;
 clrscr();

 printf("thr value of a is = ");
 scanf("%d", &a);

 printf("thr value of b is = ");
 scanf("%d", &b);

 printf("thr value of c is = ");
 scanf("%d", &c);

 (a==b && b==c)
   ? printf("all value are same...")
   : (a==b)
     ?printf("the a and b value is same")
     :(b==c)
       ? printf("the value of b and c is same")
       :(c==a)
	 ? printf("the value of c and a is same")
	 : (a<b)
	    ?(a<c)
	      ? printf("the value of a is smaller")
	      : printf("the value of c is smaller")
	    :(b<c)
	      ? printf("the value of b is smaller")
	      : printf("the value of c is smaller");
     getch();
}