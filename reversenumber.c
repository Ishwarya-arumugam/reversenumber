#include<stdio.h>
#include<conio.h>
int main()
{
int a,b=0;
clrscr();
scanf("%d",&a);
   if(a>0)
   {
   while(a!=0)
   {
   b=b*10;
   b=b+a%10;
   a=a/10;
   }
   printf("the reversed number is %d",b);
   }
   else
   {
   printf("\n0");
   }
   getch();
   return 0;
   }
