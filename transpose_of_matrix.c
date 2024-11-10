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
			switch(x)
			{
				case 1 :
					printf("enter 1st number: ");
					break;
				case 2 :
					printf("enter 2nd number: ");
					break;
				case 3 :
					printf("enter 3rd number: ");
					break;
				case 4 :
					printf("enter 4th number: ");
					break;
				case 5 :
					printf("enter 5th number: ");
					break;
				case 6 :
					printf("enter 6th number: ");
					break;
				case 7 :
					printf("enter 7th number: ");
					break;
				case 8 :
					printf("enter 8th number: ");
					break;
				case 9 :
					printf("enter 9th number: ");
					break;					
			}
			
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
