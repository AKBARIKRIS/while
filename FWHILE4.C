#include<stdio.h>
#include<conio.h>
 void main()
 {
  int i,n;
  clrscr();
  printf("enter value i=");
  scanf("%i",&n);
   printf("enter value n=");
  scanf("%i",&i);
  for(i;i>=n;i--)
  {
   printf("%d \n",i);
  }
  getch();
 }