
/*
********************
*********  *********
********    ********
*******      *******
******        ******
*****          *****
****            ****
***              ***
**                **
*                  *
*/
#include<stdio.h>
main()
{
	int i, j ,k ;
	for (i=10 ; i>=1; i--)
	{
		for(j=1; j<=10; j++)
		{
			if(i>=j)
			{
				printf("*");
				
			}
			else 
			printf("  ");
		
		}
		
		for(j=1; j<=i; j++)
			printf("*");
//		or
//		for(k=10; k>=1;k--)
//		{
//			if(i>=k)
//				printf("*");
//			else
//				printf(" ");
//		}
		
		
		printf("\n");
	}
}
