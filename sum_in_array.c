#include <stdio.h>
main()
{
	int a[10] , i ,sum=0 ;
	printf ("enter 10 numbers\n");

	for (i=0 ; i<=9 ; i++)
	{
		scanf("%d", &a[i]);
		
	}
	for (i=0 ; i<=9 ; i++)
	{
		sum = sum + a[i];
		
	}
	printf("sum is %d  ",sum );
	
}
