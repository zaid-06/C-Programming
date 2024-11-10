//Write a program to print all prime numbers between two given numbers
#include <stdio.h>
main()
{
	while(1)
	{
		int a, i, s=0, b, primeCount = 0;
		
		printf("Enter first number: ");
		scanf("%d", &a);
		printf("Enter second number: ");
		scanf("%d", &b);		
		if(a > b)
		{
			printf("%d is greater than %d\n", a , b);
			printf("enter correct value:\n");
		}
		else   
		{   
			printf("Prime numbers between %d and %d are: ", a, b);
			for(a; a <= b; a++)
			{  
				s = 0;
				for(i=1; i <= a; i++)
				{
					if(a % i == 0)
					{
						s++;	
					}
				}
				if(s == 2)
				{
					primeCount++;
					printf("%d  ", a);	
				}
			}
			
			if(primeCount == 0)	{
				printf("No prime no found");
			}
		}
		printf("again\n");
		
	}
		
}
