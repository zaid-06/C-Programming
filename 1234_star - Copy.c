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
		for (j=4; j>=1; j--)
		{
			if(j<=i )
			{
			  printf("%d",k);
			  k++;
			}
			
			else 
			printf(" ");
		}
		printf("\n");
	}
}
