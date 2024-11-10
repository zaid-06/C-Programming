//Write a program in C to add numbers using call by reference.
#include<stdio.h>
int  add_two_number(int  *, int *);
main()
{
	int a , b , sum;
	int *p , *q;
	printf("neter first numebr: ");
	scanf("%d",&a);
	printf("neter second  numebr: ");
	scanf ("%d",&b);
	
    sum= add_two_number(&a, &b);
	printf("%d + %d = %d ", a, b, sum);
	
	
}
int add_two_number(int *p , int *q)
{
	int sum;
	sum = *p + *q;
	return sum;
	
}
