#include <stdio.h>
main()
{
	int i, num[5];
	for (i=0; i<5; i++)
	{
		printf("enter number into array ");
		scanf ("%d",&num[i]);
		
	}
//	for(i=1 ; i<5; i++)
//	printf("\n data of array :%5d", num[i]);
		for(i=1; i<5; i++)
	printf("\n\n\n address of %d :%5d value of = %6d", i, &num[i], num[i] );
//	printf("%d")
//printf()

	
}
