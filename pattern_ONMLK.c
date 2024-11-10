//        A
//      C B
//    F E D
//  J I H G
//O N M L K
#include<stdio.h>
main()
{
	printf("by me: \n");
	int i, j, k, y=65;
	for(i=1 ; i<=5; i++)
	{
		k=y;
		for(j=1 ; j<=5; j++)
		{
			if(j>=6-i){
				printf("%c ",k--);
				y++;	
			}
			else
				printf("  ");
		}
		y++;
		printf("\n");
	}
	
	printf("\nby sir:  \n");
	by_s_sir();
	
}

by_s_sir()
{
	int i, j;
	char k=64;
	for(i=1; i<=5; i++)
	{
		k=k+2*(i-1)+1;
		for(j=1 ; j<=5 ; j++)
		{
			if(j>=6-i)
			{
				printf("%c ",k--);
			}
			else
			printf("  ");
		}
		printf("\n");
	}
	
	
	
}
