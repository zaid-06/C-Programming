#include<stdio.h>
int* find_larger(int*, int* );
main()
{
	int *p ,n1, n2;
	int *big ;
	
	input(&n1, &n2);
	big = find_larger(&n1 , &n2);
	printf("%d is big ",*big);
	
}
int* find_larger(int* p , int* q )
{
	if(*p > *q)
	return (p);
	else 
	return (q);
}
input(int *p, int *q)
{
	printf ("enter frist number:" );
	scanf("%d",p);
		printf ("enter second number:" );
	scanf("%d",q);
}
