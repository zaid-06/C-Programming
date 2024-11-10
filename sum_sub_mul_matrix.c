	
//Addition , Subtraction and Multiplication of two matrix 
#include<stdio.h>
main()
{   
	char choice;
	int indx=0;
	int A[3][3], B[3][3], temp[3][3], mul[3][3];
	int i, j,  x, y ;
	
	// input element into first matrix
	printf("enter 9 number for first matrix: \n");
	for(i=0 ; i<=2 ; i++)
	{
		for(j=0; j<=2;j++)
		{
			printf("element - a[%d][%d]: ",i, j);
			scanf("%d",&A[i][j]);	
		}	
	}
	
	// input element into second matrix
	printf("enter 9 number for second matrix: \n");
	for(i=0 ; i<=2 ; i++)
	{
		for (j=0 ; j<=2; j++)
		{
			printf("element - a[%d][%d]: ",i, j);
			scanf("%d",&B[i][j]);	
		}	
	}
	
	// display first matrix
	printf("\nfirst matrix: \n");
	for(i=0; i<=2; i++)
	{
		
		for(j=0; j<=2; j++)
			printf("%d ",A[i][j]);
		printf("\n");
	}
	// display second matrix
	printf("\nsecond matrix: \n");
	for(i=0; i<=2; i++)
	{
	
		for(j=0; j<=2; j++)
			printf("%d ",B[i][j]);
		printf("\n");
	}
	
	// function of calculation
	l1:
	printf("\nA = addition\nS = subtraction\nM = multiplication\n");
	printf("\ntype here: ");
	
	choice = getche();
	
	switch(choice)
	{
		case 'A':
		case 'a':
			printf("\nAddition of matrix first and second:");

			for(i=0 ; i<=2 ; i++)
			{
				
				printf("\n");
				for (j=0 ; j<=2; j++)
				{
					temp[i][j]	= A[i][j] + B[i][j];
					printf("%d ", temp[i][j]);
				}
				
			}
			break;
			
		case 'S':
		case 's':
			printf("\nSubtraction of matrix first and second:");
		    for(i=0 ; i<=2 ; i++)
			{
				
				printf("\n");
				
				for (j=0 ; j<=2; j++)
				{
					temp[i][j]	= A[i][j] - B[i][j];
					printf("%d ", temp[i][j]);
				}
				
			}
			break;
		case 'M':
		case 'm':
		    printf("\nMultiplication of matrix first and second:");
			indx=0;
			while(indx <=2)
			{
				printf("\n");
				for(i=0 ;i<=2; i++)
				{
		
					mul[x][y] = 0;
					for(j=0 ;j<=2; j++)
					{
						temp[i][j]	= A[indx][j] * B[j][i];
					
						mul[x][y] = mul[x][y] + temp[i][j];
			
			    	}
			    
			    	printf("%d  " ,mul[x][y]);	
				}
				
				indx++;			
			}
			break;
		default : 
			printf("\ninvalid choice ");
			break;		
					
	}
	printf("\n\n");
	goto l1;
	

}
