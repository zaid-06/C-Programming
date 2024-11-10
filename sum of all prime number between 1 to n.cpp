
//Write a program to print all prime numbers of a number

#include <stdio.h>
main()
{
	int a, i, j, s = 0, sum=0 ;
	printf("enter a number:");
	scanf("%d", &a);
	for (i=1 ; i<=a ; i++)
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
			sum = sum+i
			printf("%d\n", i);
		}	
	}
	printf("sum of all prime number is %d",sum)
	

	
	
}
