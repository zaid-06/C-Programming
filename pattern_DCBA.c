#include<stdio.h>
main()
{
	int i, j,k,x=65;
	for(i=1 ; i<=4 ; i++)
	{
		
		k=x;
		
		for (j=1 ; j<=i ; j++)
		{
			printf("%c",k);
			k--;
			
		}
		x++;		
		printf("\n");
	
	}
}

