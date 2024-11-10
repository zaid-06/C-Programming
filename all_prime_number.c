
//Write a program to print all prime numbers 

#include <stdio.h>
void prime(int );
main()
{
	int num;
	printf("enter a number:");
	scanf("%d", &num);  
	prime(num) ;      
	
}

void prime(int n)
{
	int  i, j, s;
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
			printf("%d ", i);
		}	
	}
}
