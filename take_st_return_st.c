
#include <stdio.h>
main()
{  
	
	int a,s,b;
	printf(" enter two number ");
	scanf("%d%d",&a,&b);
	
	s=add(a,b);
	printf("%d",s);
		
	
	
	
}

int add(int a,int b)
{
	int d;
	d=a+b;

	return (d);
	
	
}
