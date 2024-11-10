#include <stdio.h>
main()
{
	int i, j , k=1, n;
	printf("how many line you want to print: ");
	scanf("%d",&n);
	
	for (i=1 ; i <= n; i++)
	{
		
		for (j=1 ; j<=(n/2)+1 ; j++)
		{
		    if (j<=k) 
			  printf(" *");
		
		}
		(i<n/2)?k++:k--;
	     	printf("\n");
	    
	}
}
