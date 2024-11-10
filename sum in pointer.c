#include<stdio.h>
main()
{
	int a , b, sum ;
	int *p1 , *p2;
	printf(" pointer add two number:\n ");
	printf("enter first number: ");
	scanf("%d",&a);
	printf("enter second number: ");
	scanf("%d",&b);
	p1=&a;
	p2=&b;
	sum = *p1 + *p2;
	printf("sum %d",sum);
}
