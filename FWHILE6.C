#include<stdio.h>
#include<conio.h>
 void main()
 {
  int i,n;
  clrscr();
  printf("enter value i=");
  scanf("%d",&i);
  printf("enter value n=");
  scanf("%i",&n);


  for(i;i<=n;i++)
  if(i%2==1)
  {
   printf("%d \t",i);
  }
  getch();
 }