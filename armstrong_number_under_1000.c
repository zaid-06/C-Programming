
//Program to print all Armstrong numbers under 1000 in C language
#include<stdio.h>
main()
{
	int i, x, q , sum=0, save;
	printf("arm strong number are: ");
	for(i=1 ; i<=1000; i++)
	{
		
		sum=0;
		save=i;
		while(save!=0)
		{
			x=save%10;
			save=save/10;
	
			q=x*x*x;
			sum=sum+q;
		}
	    if(sum==i)
		printf("%d ",sum);
	}
}
