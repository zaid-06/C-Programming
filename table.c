// print table of user’s

#include <stdio.h>
main()
{
	int a,i;
	printf ("enter a number ");
	scanf("%d",&a);
	printf("%d of table is =\n ",a);
	for(i=1;i<=10;i++)
	{
	
		printf("%d\n",i*a);
	}
}
