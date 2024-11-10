#include<stdio.h>
main()
{
	
	int a , b,temp;
	printf("enter 2 numbers: ");
	scanf("%d%d",&a,&b);
	temp =a;
	a = b;
	b  = temp;
	
	printf("swaped\na = %d\nb= %d",a,b);
	
}
