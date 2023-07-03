#include<stdio.h>
#include<conio.h>
 void main()
 {
  int i,n;
  clrscr();
  printf("enter value n= ");
  scanf("%d",&n);
  printf("enter value i= ");
  scanf("%d",&i);
  clrscr();
  do{
    if(i%2==1)
    {
    printf("%d \t",i);
    }
    i--;
    }while(i>=n);
  getch();
 }