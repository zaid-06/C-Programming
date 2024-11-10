#include <stdio.h>
main()
{
	while(1)
	{
		int a[2][2], b[2][2] , c[2][2] ,d[2][2];
		int i, j, x, y ;
		
		printf("enter 4 number for first matrix\n");
		x=i;
		y=j;
		for(i=0 ;i <= 1 ; i++)
		{
			for(j=0 ;j<=1; j++)
			{
				scanf("%d", &a[i][j]);
				
			}
			
		}
		printf("enter 4 number for second matrix\n");
		
		for(i=0 ;i <= 1 ; i++)
		{
			for(j=0 ;j<=1; j++)
			{
			    scanf("%d", &b[i][j]);	
			} 	
		}
	
			
	
		for(i=0 ;i<=1; i++)
		{
	//		x=0;
	
				for(j=0 ;j<=1; j++)
				{
					c[i][j]	= a[0][j] * b[j][i];
				
					d[x][y] = d[x][y] + c[i][j];
		
		    	}
		    	printf("%d  " ,d[x][y]);
		    	d[x][y] = 0;
			
		}
		printf("\n");
		for(i=0 ; i <= 1 ; i++){
		
			for(j=0 ; j<=1 ; j++){
				
					c[i][j]	= a[1][j] * b[j][i];
					d[x][y] = d[x][y] + c[i][j];
					
					
			}
			printf("%d  ", d[x][y]);
			d[x][y] = 0;	
		}
		printf("\n\n");
	}
			
				
	
	
		
}
