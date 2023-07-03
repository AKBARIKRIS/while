#include<stdio.h>
#include<conio.h>
 void main()
 {
  int i,n;
  clrscr();
  printf("enter value a= ");
  scanf("%d",&i);
  printf("enter value n=");
  scanf("%d",&n);
  clrscr();
  do{
     printf("%d \t",i);
     i--;
    }while(i>=n);
  getch();
 }