//1. write a c program accept a number of 4 digits and find sum of first and last digits

#include<stdio.h>
main ()
{
	int n, last, first, sum;
	printf (" enter a number of 4 digits: ");
	scanf ("%d", &n);
	last = n % 10;

	first = n / 1000;
	sum = first + last ;
	printf("sum of first and last digit = %d",sum);
}
