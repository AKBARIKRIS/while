#include<stdio.h>
#include<conio.h>
 void main()
 {
  int i=2000,n;
  clrscr();
  printf("enter value n= ");
  scanf("%d",&n);

  clrscr();
  do{
    if(i%4==0)
    {
    printf("%d \t",i);
    }
    i++;
    }while(i<=n);
  getch();
 }