#include<stdio.h>
main()
{
	int i, j, k, x=1;
	for(i=1 ; i<=4 ; i++)
	{
		
		k=x;
		for (j=1 ; j<=7 ; j++)
		{
			if(j>=5-i && j<=3+i)
			{
				printf("%d",k);
				j<=3?k--:k++;
			}
			else
			{
				printf(" ");
			}
			
		}
     	x++;
			
		printf("\n");
	
		
	}
	
}

