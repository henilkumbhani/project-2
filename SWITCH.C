#include<stdio.h>
#include<conio.h>

main()
{
	clrscr();
	char c;
	printf("\npress S for sunday ");
	printf("\npress m for monday ");
	printf("\npress t for tuesday ");
	printf("\npress w for wednesday ");
	printf("\npress T for thursday ");
	printf("\npress f for friday ");
	printf("\npress s for saturday ");
	printf("\nenter number among this:-");
	scanf("%c",&c);
	switch(c)
	{
	     case 'S':
		    printf("1=sunday");
		    break;
	     case 'm':
		    printf("2=monday");
		    break;
	     case 'T':
		    printf("3=tuesday");
		    break;
	     case 'w':
		    printf("4=wednesday");
		    break;
	     case 't':
		    printf("5=thursday");
		    break;
	     case 'f':
		    printf("6=friday");
		    break;
	     case 's':
		    printf("7=saturday");
		    break;
	     default :
		    printf("plz enter valid choice!!");
		    }
      getch();
}











