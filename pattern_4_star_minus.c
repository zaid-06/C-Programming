#include<stdio.h>
//pattern_4_star_minus.c
main()
{
	int i , j;
	
 	for(i=1 ; i<=4; i++)
 	{
 		for (j=1 ; j<=9; j++)
		{
		 	if(j>=6-i &&  j <= 10-i)
			 printf("*");
			else
			 printf(" ");
	    }	
 		printf("\n");
	}
}
