#include<stdio.h>
main()
{
	int a[10]; 
	int i, j, k=0;
	printf("enter 10 elements: \n");
	for(i=0 ; i<10; i++)
	{
		printf("elsement- %d: ",i);
		
		scanf("%d",&a[i]);
		
	}
	for(i=0 ; i<10; i++)
	{
		if(a[i] >= k )
		{
			k=a[i];
		}
	}
	printf("\nmax value is %d",k);
	
	for(i=0 ; i<10; i++)
	{
		if(a[i] <= a[0] )
		{
			a[0]=a[i];
		}
	}
		printf("\nmin value is %d",a[0]);
	
	
	
}
