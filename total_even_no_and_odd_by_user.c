#include <stdio.h>
main()
{
	int n, i;
	printf("enter a number: ");
	scanf("%d", &n);
	for(i=0; i <= n; i++)
	{

		if(i%2==0)
	{
		printf("even: %d \n", i);
		
		}
		else 
		{
			printf("odd: %d \n", i);
		}
		
	}
}
