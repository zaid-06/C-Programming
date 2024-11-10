//Write a program to calculate sum of first N even natural numbers
#include <stdio.h>

main()
{
	int n, i, sum = 0;
	
	while (1) {
		printf("Enter a number: ");
		scanf("%d", &n);
		
		for (i = 0; i < n; i++) 
		{
			printf("%d ", i*2);
			sum = sum + i*2;
		}
		
		printf("\nSum of first %d even natural numbers: %d\n", n, sum);
	}
	
}

