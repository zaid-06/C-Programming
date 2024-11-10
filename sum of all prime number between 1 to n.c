
//Write a program to print all prime numbers 

#include <stdio.h>
main()
{
	int n, i, j, s, sum=0 ;
	printf("enter a number:\n ");
	scanf("%d", &n);
	
	for (i=1 ; i<=n ; i++)
	{
		s = 0;
		for(j=1 ; j<=i ; j++)     
		{
			if(i%j==0)            
			{
				s++;                
			}
		}
		
		if(s==2)
		{
			sum = sum+i;
			printf("%d ", i);
		}	
	}
	
	printf("\nsum of all prime number is %d",sum);
	
}
