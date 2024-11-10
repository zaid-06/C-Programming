#include <stdio.h>
#include <conio.h>

main()
{
	int	i=1,n;
	while(i<=5)
	{
		printf("enter a numbe");
		scanf("%d",&n);
		if(n>0)
		{
			break;	
		}
		i++;
		
	}
	if(i==6)
	{
		 printf("ends normaly");
		 
	}
	else
	{
		printf("applied break");
		
	}
}
