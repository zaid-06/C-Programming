#include<stdio.h>
main()
{
	int i , sum = 0, n = 1 ;
	for(i= 1 ; i <= 40 ; i ++ )
	{
		
		sum = sum + n;
		n = n+3;
	}
	printf("%d ",sum);
}
