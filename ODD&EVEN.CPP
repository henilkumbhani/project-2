#include<stdio.h>
#include<conio.h>
main()  {
     int a;
     clrscr();
     printf("enter the value of A:-");
     scanf("%d",&a);
     (a%2==0)? printf("given number is even.") : printf("given number is odd.");
     getch();
     }