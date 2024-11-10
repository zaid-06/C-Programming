//14. write a c program and accept two number and check largest
#include<stdio.h>
main()
{
	int x, y;
	printf ("enter two numbers x and y: ");
	scanf("%d%d",&x ,&y);
	if(x>y)
	{
		printf("%d is largrst",x);
		
	}
	else if (x<y)
	{
		printf("%d is largest",y);
	}
	if(x==y)
	{
		printf("equal");
	}
}
