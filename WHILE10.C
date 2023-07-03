#include<stdio.h>
#include<conio.h>
 void main()
 {
  int a=1,b,c;
  clrscr();
  printf("enter start tabel =");
  scanf("%d",&b);
  printf("how many tabel =");
  scanf("%d",&c);

   do{
      printf(" %d*%d=%d \n ",b,a,a*b);
      a++;
     }while(a<=c);
  getch();
 }