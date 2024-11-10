//1+2+3+4+5+6 = 21
#include<stdio.h>
void sum(int ,int ,int );

main()
{
	int i, n ;
	printf("enter a number: ");
	scanf("%d",&n);
	add(i, n );

}

void add(int i,int  n)
{ 
    int sum = 0;
    printf("sum all number between 1 to %d: \n",n);
	for(i=1 ; i<=n; i++ )
	{
		sum = sum + i;
		if(i == n)
		printf("%d",i);
		else
		printf("%d+",i);	
	}
	printf(" = %d",sum);
	
}
