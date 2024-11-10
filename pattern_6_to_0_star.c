#include <stdio.h>
main()
{
	int i , j ,k=6 ;

    for( i=0 ; i <= 6 ; i++ )
	{
		k=6-i;
		for(j=6 ; j>=i ; j--)
		{
			printf("%d", k);
			k--;
		}
		printf("\n");
	}	
}
