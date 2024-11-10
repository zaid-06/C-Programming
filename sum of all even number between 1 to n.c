//0+2+4+6 = 12
#include<stdio.h>
main()
{
	int i, j, n, sum=0;
	printf ("enter a number: ");
	scanf ("%d",&n);
	printf("0");
	for(i=1 ; i<=n; i++)
	{
		if(i%2==0 )
		{
			printf("+%d",i);
			sum=sum+i;
		}
		
		
	}
	printf (" = %d is sum of all even number between 1 to %d",sum, n);
}
