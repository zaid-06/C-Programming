//Write a program in C to find sum of right diagonals of a matrix.

#include<stdio.h>
main()
{
	int arr[2][2];
	int i, j, sum;
	 printf("enter element for array:\n "); 
    for(i=0 ; i<=1; i++)
    {
    	for(j=0;j<=1; j++)
    	{
    		printf ("element - %d: ",i);
        	scanf("%d",&arr[i][j]);	
		}
	}
	
   	for(i=0 ; i<=1; i++)
	{
    	for(j=0;j<=1; j++)
    	printf ("%d ",arr[i][j]);	
		
		printf("\n");
   	
	}
	sum = arr[0][0] + arr[1][1];
   	printf("Addition of the right Diagonal elements is %d " ,sum);


}
