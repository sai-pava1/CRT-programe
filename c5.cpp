#include<stdio.h>
main()
{
int a,b;
printf("\n enter the values");
scanf("%d%d",&a,&b);
printf("\n before swapping a=%d \t b=%d",a,b);
 a=a+b;
b=a-b;
a=a-b;
printf("\n after swapping a=%d \t b=%d",a,b);
}
