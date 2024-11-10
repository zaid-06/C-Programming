#include <stdio.h>
main()
{
	int i, j, x=65, y;
	
	for (i=1 ;i<=4 ; i++)
	{
		x=65;
		y=1;
		for(j=1 ; j<=8; j++)
		{
			if(j>=5-i && j<= 4+i)
			{
				if(j<=4)
				{
					printf	("%c",x);
					x++;
				}
				
				else
				{
					printf	("%d",y);
					y++;
				}
		
			}
			else
			{
				printf(" ");
			}	
		}
		printf("\n");
		
	}
}

