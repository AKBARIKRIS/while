#include<stdio.h>
#include<conio.h>
 void main()
 {
  int a=1,i,f=1;
  clrscr();
  printf("enter value =");
  scanf("%d",&i);
  do{
     f=f*a;
     a++;
    }while(a<=i);
    printf("f=%d",f);

  getch();
 }