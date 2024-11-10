//   +++
//   +++
//+++++++++
//+++++++++
//   +++
//   +++
#include<stdio.h>
main()
{
		int i, j;
	for (i=0 ;i<6;i++)
	{
		for(j=0; j<9; j++)
		{
			if(i<4)
			{
				if(2>i)
				{
					if(j<3 || j>5)
					{
						printf(" ");
					}
					else
					{
						printf("+");
					}
				}
				
				if (1<i)
				printf("+");
			}
			else
			{
				if(j<3 || j>5)
				printf(" ");
				else 
				printf("+");
			}
		}
		printf("\n");
	}
}
