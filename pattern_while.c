#include<stdio.h>
main()
{
	int row =1 , col=1 , s=8, k=1;
	while(row<8)
	{
		col =1 ;
		
		k=1;
		while(k<=s)
		{
			printf(" ");
			k++;
			
		}
		
		while(col<=row)
		{
			printf("$ ");
			col++;
			
		}
		printf("\n");
		row ++;
		s--;
	}	
	
	
}
