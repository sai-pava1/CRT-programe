#include<stdio.h>
main()
{
	int m,p,c,tot;
	float avg;
	printf("\n enter the marks in maths,physics and chemistry");
	scanf("%d%d%d",&m,&p,&c);
	tot=m+p+c;
	avg=tot/3;
	printf("\n total marks :%d",tot);
	printf("\n average ;%f",avg);
}
