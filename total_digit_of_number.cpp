//count digits in a given number

#include <stdio.h>
main()
{
	int a, count=0 ;
	printf("enter a number :");
	scanf("%d",&a );
	while(a>0)
	{ 
		a=a/10 ;
		count++ ;
	}
	
	printf("total digit = %d ", count);
}
