#include<stdio.h>
#include<conio.h>

//wap to find maximum number from 4 number using nested statement

main()
{
 int a, b, c, d;

 clrscr();

 printf("the value of first number is = ");
 scanf("%d", &a);

 printf("the value of second number is = ");
 scanf("%d", &b);

 printf("the value of third number is = ");
 scanf("%d", &c);

 printf("the value of fourth number is = ");
 scanf("%d",&d);

 if (a==b && b==c && c==d)
 {
 printf("all value are same");
 }
 else if (a==b)
 {
 printf("the value of first and second number is same");
 }
 else if (b==c)
 {
 printf("the value of second and third number is same");
 }
 else if (c==d)
 {
 printf("the value of the value of third and fourth number is same");
 }
 else if (c==a)
 {
 printf("the value of third and first number is same");
 }
 else if (a==d)
 {
 printf("the value of first and fourth number is same");
 }
 else if (b==d)
 {
 printf("the value of second and fourth number is same");
 }
 else
 {
   if (a>b)
   {
     if(a>c)
     {
       if (a>d)
       {
       printf("the value of first number is big");
       }
       else
       {
       printf("the value of fourth number is big");
       }
     }
     else
     {
       if (c>d)
       {
       printf("the value of third number is big");
       }
       else
       {
       printf("the value of fourth number is big");
       }
     }
   }
   else
   {
     if (b>c)
     {
       if(b>d)
       {
	printf("the value of second number is big");
       }
       else
       {
	printf("the value of fourth number is big");
       }
     }
     else
     {
       if (c>d)
       {
       printf("the value of third number is big");
       }
       else
       {
       printf("the value of fourth number is big");
       }
     }
   }
 }
 getch();
}
