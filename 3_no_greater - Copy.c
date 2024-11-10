#include <stdio.h>


main()
{
	int a,b,c;
	
	printf("enter three number :");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("%d is greater number ",a);
		
	}
	if(b>a&&b>c)
	{
		printf("%d is greater ",b);
		
	}
	else 
	{
		printf("%d is grater ",c);
		
	}

}
