//Write a program in C to find sum of rows and columns of a Matrix.
#include<stdio.h>
main()
{
	
	int a[2][2], sum_row;
	int i=0, j, t, n, sum_column;
	printf("Input elements in matrix : \n");
	for(i=0 ; i<2; i++)
	{
		for(j=0 ; j<2; j++)
		{
			printf("element - a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
		for(i=0 ; i<2; i++)
	{
		
		for(j=0 ; j<2; j++)
		{
			printf(" %d ",a[i][j]);
	        
	        sum_column = sum_column + a[j][i];
			sum_row = sum_row+ a[i][j];
		}
		printf(": sum row = %d : ",sum_row);
		printf(": sum colum = %d : ",sum_column);
		printf("\n");
		
		
		sum_column=0;
		sum_row=0;
	}
	
}
