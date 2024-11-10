//Function to calculate sum of squares of N natural numbers in C Language
#include<stdio.h>
void display(int);
int function(int, int);
main()
{
	int n , sum=0;
	n=input(n);
	sum=function(n , sum);
	display(sum);
	
}

int input(int n)
{
	
	printf("enter a number: ");
	scanf("%d",&n);
	return(n);
	
}


int function(int n, int sum)
{
	int i;
    for(i=1 ; i<=n; i++)
	{
		sum= sum + i*i;
		
	}
	return(sum);
}
void display(int sum)
{
	printf("sum is %d",sum);	
}
