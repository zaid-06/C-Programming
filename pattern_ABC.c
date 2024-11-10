#include <stdio.h>
main()
{
	int i, j, x=65;
	
	for (i=1 ;i<=4 ; i++)
	{
		x=65;
		for(j=1 ; j<=7; j++)
		{
			if(j>=5-i && j<= 3+i)
			{
				printf("%c",x);
				j<=3? x++:x--;
						
			}
			else
			{
				printf(" ");
			}	
		}
		printf("\n");
		
	}
}
