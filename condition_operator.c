//logical operator
#include<stdio.h>
main()
{
	int a,b;
	int c=5;
	
	printf("\n enter a "); scanf("%d",&a);
	printf("\n enter b "); scanf("%d",&b);
	(a==b) ?(a>c)?printf(" big."):printf("small ..") :printf("not equal");
	(a>b && a>c)? printf("big"):(b>c)?printf("b is big"):printf("c is big");
	
	
		
	
}
