//Write a program to print first N terms of Fibonacci series
// 0   1  1  2  3  5   8  13  21


#include<stdio.h>
main()
{
	int num, a=-1, b=1, c, i;
	printf ("enter a number ");
	scanf("%d", &num);
	for (i=1; i <= num; i++)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
			
			
	}
}
