
#include<stdio.h>
main()
{
	int i, s, n;
	float  sum, x ;
	printf ("enter a number :");
	scanf("%d",&n);
	for (i=1 ; i<=n; i++)
	{
		s=i+1;
		x= i / (float)s;
		printf("%d/%d = %2f \n", i, s, x);
		sum=sum+x;
	}
	printf("\n");
	for (i=1 ; i<=n; i++)
	{
		if(i==n)
		printf("%d/%d = ",i ,i+1);
		else
		printf("%d/%d + ",i, i+1);
		
     }
	printf("%f",sum);
} 

