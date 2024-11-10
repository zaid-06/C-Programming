#include<stdio.h>
main()
{
	int i , j, k, x=1 ;
	for(i=0 ; i<4; i++)
	{
		k=65;
		for(j=1 ; j<=7 ; j++)
		{
			if(j>=5-i && j<=3+i)
			{
				if(j==4)
				printf("#")	;
				else 
				{
					printf("%d",x);
					x++;
				}
				
			}
			else 
			{
				printf("%c",k);
			}
			k++;
		}
		
		printf("\n");
	}
}
