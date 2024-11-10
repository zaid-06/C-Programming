#include<stdio.h>
main()
{
	int s[3][3], trpos[3][3]; 
	int i, j, x=1;
	printf("enter 9 number for matrix:\n");
	for(i=0; i<=2; i++)
	{
		for(j=0; j<=2; j++)
		{
			printf("element - a[%d][%d]: ",i,j);
			scanf("%d",&s[i][j]);
			x++;
			
		}
	}

	for(i=0; i<=2; i++)
	{
		printf("\n");
		for(j=0; j<=2; j++)
		{
			if(j==0)
		    	printf("| %d ",s[i][j]);
			else if (j==2)
				printf("%d |",s[i][j]);
			else
				printf("%d ",s[i][j]);
		}
		
	}

	printf("\n\ntranpose of this matrix: \n");
		for(i=0; i<=2; i++)
	{
		printf("\n");
		for(j=0; j<=2; j++)
		{
			
			trpos[i][j] = s[j][i];
			
			if(j==0)
				printf("| %d ",trpos[i][j]);	
			else if(j==2)
				printf("%d |",trpos[i][j]);
			else
				printf("%d ",trpos[i][j]);
			
		}
		
		
	}
	
}
