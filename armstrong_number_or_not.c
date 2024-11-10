#include<stdio.h>
main()
{
	
	int a , i, d, q,  x, sum=0, save;
	printf("enter a number ");
	scanf("%d",&a); 
	save=a;
	while(a!=0)
	{
		x=a%10;
		a=a/10;
		q=x*x*x;
		sum=sum+q;	
	}
	if(sum==save)

	printf("%d is armstrong ",sum);
	else
	printf("%d is not armstrong ",sum);
	
		
}

