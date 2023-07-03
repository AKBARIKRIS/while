#include<stdio.h>
#include<conio.h>
 void main()
 {
  int i=1,n,sum=0;
  clrscr();
  printf("enter value n= ");
  scanf("%d",&n);

  clrscr();
  do{
     sum=sum+i;
     i++;
    }while(i<=n);
    printf("enter value sum=%d ",sum);
  getch();
 }