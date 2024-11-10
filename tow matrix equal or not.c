// Write a program in C to accept two matrices and check whether they are equal.
//Input Rows and Columns of the 1st matrix :2 2
//Input Rows and Columns of the 2nd matrix :2 2
//Input elements in the first matrix :
//element - [0],[0] : 1
//element - [0],[1] : 2
//element - [1],[0] : 3
//element - [1],[1] : 4
//Input elements in the second matrix :
//element - [0],[0] : 1
//element - [0],[1] : 2
//element - [1],[0] : 3
//element - [1],[1] : 4
//Expected Output :
//The first matrix is :
//1 2
//3 4
//The second matrix is :
//1 2
//3 4
//The Matrices can be compared :
//Two matrices are equal
#include<stdio.h>
main()
{
	int a[2][2], b[2][2];
	int i , j, k=0;
	
	//Input elements in the first matrix :
	printf ("enter 4 element for first matrix: \n");
	for(i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<2; j++)
		{
			printf("element- [%d],[%d]: ", i, j);
			scanf("%d",&a[i][j]);
		}
	}
	
	//Input elements in the second matrix :
	printf("enter 4 element for second matrix: \n"); 
	for(i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<2; j++)
		{
			printf("element- [%d],[%d]: ", i, j);
			scanf("%d",&b[i][j]);
		}		
	}
	
	//print first matrices
	printf("first matrix: \n");
	for(i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<2; j++)
		{
			printf("%d ", a[i][j]);
			
		}
		printf ("\n");
	}
	
	// print second matrices
	printf("\nsecond matrix: \n");
	for(i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<2 ;j++)
		{
			printf("%d ",b[i][j]);
			
		}
		printf("\n");
	}
	
	// equal or not  first and second matrix 
	for(i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<2 ;j++)
		{
			if (a[i][j]!=b[i][j])
			{
				k++;
				break;
			}
			
		}
		
		if(k==1)
	   	break;
		
	}


	// print matrix equal or not 
	if(k==1)
	{
		printf("\nwe compared between first and second Matrices  \n matrices are not equal");
		printf("\n_________________________________________________________________________");
	}
	else 
	{
		printf("\nfirst and second matrices are equal ");
		printf("\n____________________________________");
	}
	
	
	
	
}
