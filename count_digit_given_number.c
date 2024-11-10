#include<stdio.h>
main()
{
	int n,count=0, x;
	printf("enter a number: ");
	scanf("%d", &n );
	x=count_digit(n, count);

	printf("number of digit %d", x);
}

int count_digit(int c, int count)
{
	
	if(c==0)
	{
		return (count);
	}
	else 
	{
		c= c/10;
		count++;
		count_digit(c, count);
	}
}





