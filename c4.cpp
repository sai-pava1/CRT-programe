#include<stdio.h>
main()
{
int a,b,c;
printf("\n enter the values");
scanf("%d%d",&a,&b);
printf("\n before swapping a=%d \t b=%d",a,b);
c=a;
a=b;
b=c;
printf("\n after swapping a=%d \t b=%d",a,b);
}

