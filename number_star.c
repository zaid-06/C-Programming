//        1
//       121
//      12321
//     1234321

#include<stdio.h>
main()
{
	int i, j;
	int k=1 ;
	for (i=1 ; i<=4; i++)
	{
		
		k=1;
		for (j=1; j<=7; j++)
		{
			if(j>=5-i && j<=3+i )
			{
				printf("%d",k);
				if (j<4)
				{ 
					k++;
				}
		        else
		    	{
			 	 	k--;
		        }
			
			    
			}
			
			else 
			printf(" ");
		}
		printf("\n");
	}
}
