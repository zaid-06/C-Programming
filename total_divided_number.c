#include <stdio.h >

main()
{  
	while(1)
	{
	 	int a  , i ;
		printf ("enter a number ");
		scanf("%d", &a);
		printf ("All factors of %d are:\n",a );
		for(i=1 ; i<=a ; i++)
		{
			if (a%i==0)
			{
				printf("%d\n", i);
				
			}
		}
	
	}
	
}
