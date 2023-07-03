#include<stdio.h>
#include<conio.h>
 void main()
 {
  int i=1,n;
  clrscr();
  printf("enter value = ");
  scanf("%d",&n);
  clrscr();
  do{
     printf("%d \n",i);
     i++;
    }while(i<=n);
  getch();
 }