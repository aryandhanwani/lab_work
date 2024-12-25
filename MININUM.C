#include<stdio.h>
#include<conio.h>

//wap to find minimum number from 3 number using nested method

main()
{
 int a, b, c;

 clrscr();

 printf("the value of first_number is = ");
 scanf("%d", &a);

 printf("the value of second_number is = ");
 scanf("%d" ,&b);

 printf("the value of third_number is = ");
 scanf("%d" ,&c);

 if (a==b && b==c)
 {
 printf("all values are same");

 }
 else if (a==b)
 {

 printf("the value of first_number and second_number are same");

 }
 else if (b==c)
 {
 printf("the value of second_number and third_number is same");

 }
 else if (c==a)
 {
 printf("the value of third_number and first_number is same");

 }

 else
 {
   if (a<b)
   {
     if (a<c)
     {
      printf("first_number is smaller than third_number");

     }
     else
     {
     printf("third_number is smaller than first_number");
     }
   }
   else
   {
    if (b<c)
    {
    printf("second_number is smaller than third_number");
    }
    else
    {
    printf("third_number is smaller than second_number");
    }
   }
}
getch();

}