//Write a C program to count the total number of digit 1 appearing in all
// positive integers less than or equal to a given integer n. Go to the editor
//Example:
//Input n = 12,
//Return 5, because digit 1 occurred 5 times in the following numbers: 1, 10, 11, 12.

#include<stdio.h>
main()
{
	int sum, n, digit;
	
	printf("enter a number: ");
	scanf("%d",&n);
	printf("which digit do you want to count between 1 to %d: ",n);
	scanf("%d",&digit);
	sum= fun(n, digit);
	printf("\n\nTotal number of digit 1 appearing in %d is %d",n, sum);
	
		
}


int fun(int n, int dgt)
{
	int i, store, count=0, increas=0;
	int arr[1000];
	for(i=1 ; i<=n; i++)
	{
		store=i;
		while(store!=0)
		{
			if(store%10==dgt)
			{
				arr[increas]=store%10;
				count++;
				printf("%d",arr[increas]);
				increas++;
			}
	    	store= store/10;	
		}

    }

	return(count);	
}









