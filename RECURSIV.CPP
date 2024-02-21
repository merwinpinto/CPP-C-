#include<stdio.h>
void main()
{
clrscr();
int base, exponent;
 printf("base =");
 scanf("%d",&base);
 printf("exponent =");
 scanf("%d",&exponent);
 printf("power = %d",power(base,exponent));
 getch();
 }
 int power(int b , int e)
 {
 if(e==0)
 return 1;
 else
 return (b*power(b,e-1));
 }