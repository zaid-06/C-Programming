#include<stdio.h>
main()
{
	int i, j;
	for (i=0 ;i<=6;i++)
	{
		for(j=0; j<13; j++)
		{
			if(i<4)
		    	printf("#");
			else
			{
				if(j<=4 || j>=8)
				printf(" ");
				else 
				printf("#");			 
			}
		
		}
		printf("\n");
	}
	
}

