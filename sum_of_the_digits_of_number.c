

#include <stdio.h>
main()
{
	int a, s=0 ,  count ;
	printf("enter a number :");
	scanf("%d",&a );
	
	while(a>0)
	{ 
	
		count=a%10;
		
		a=a/10;
		s=s+count;
		
		
		
	}
	
	printf("sum of digit = %d ", s);
}
