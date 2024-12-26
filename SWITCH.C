#include<stdio.h>
#include<conio.h>

main()
{
 int lang, choose_recharge;

 clrscr();

 printf("press 1 for english\n");
 printf("press 2 for hindi\n");
 printf("press 3 for gujarati\n");

 printf("choose your languge ");
 scanf("%d", &lang);

 switch (lang)
 {
   case 1 :
	printf("\npress 1 for internet recharge\n");
	printf("press 2 for top-up recharge\n");
	printf("press 3 for special recharge\n");

	printf("choose your recharge: ");
	scanf("%d", &choose_recharge);
	switch (choose_recharge){
		case 1 : printf("you choose internet recharge\n"); break;
		case 2 : printf("you choose top-up recharge\n"); break;
		case 3 : printf("you choose special recharge\n"); break;
		default : printf("invalid choice");

		}break ;
   case 2 :
	printf("\ninternet recharge ke liye 1 dabaye\n");
	printf("top-up recharge ke liye 2 dabaye\n");
	printf("special recharge ke liye 3 dabaye\n");

	printf("choose your recharge: ");
	scanf("%d", &choose_recharge);

	switch (choose_recharge){
		case 1 : printf("aapne safaltapurvak internet recharge kar diya hai \n"); break;
		case 2 : printf("aapne safaltapurvak top-up recharge kar diya hai\n"); break;
		case 3 : printf("aapne safaltapurvak special recharge kar diya hai\n"); break;
		default : printf("invalid choice");
		}break ;
   case 3 :
	printf("\ninternet recharge mate 1 dabavo\n");
	printf("top-up recharge mate 2 dabavo\n");
	printf("special recharge mate 3 dabavo\n");

	printf("choose your recharge: ");
	scanf("%d", &choose_recharge);

	switch (choose_recharge){
			case 1 : printf("tame safaltapurvak internet recharge kari didhu che \n"); break;
		case 2 : printf("tame safaltapurvak top-up recharge kari didhu che\n"); break;
		case 3 : printf("tame safaltapurvak special recharge kari didhu che\n"); break;
		default : printf("invalid choice");
		}break ;
 }

 getch();
}
