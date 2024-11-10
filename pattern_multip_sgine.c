#include<stdio.h>
main()
{
	int i , j , line ;
	printf("enter a number: ");
	scanf("%d",&line);
	for(i=1 ; i<=line ; i++)
	{
		for(j=1 ; j<=line  ; j++)
		{
			if(j==i || j == line+1-i)
			{
				printf("* ");
			}
			else 
			printf("  ");
		}
		printf("\n");
	}
}
