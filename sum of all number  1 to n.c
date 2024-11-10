
#include<stdio.h>
main()
{
	int i, n, sum=0 ;
	printf("enter a number: ");
	scanf("%d",&n);
	printf("sum of all number between 1 to %d: \n",n);
	for(i=1 ; i<=n; i++ )
	{
		sum= sum+i;
		if(i==n)
		printf("%d",i);
		else
		printf("%d+",i);	
	}
	printf(" = %d",sum);
	

}
