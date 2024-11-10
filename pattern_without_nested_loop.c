

#include<stdio.h>
#include<conio.h>
void main()
{
	int i , j , k =1, n=1 ;
	for(i= 1; i<=15; i++)
	{
		printf("%d" ,n);
		if(n==k)
		{
			printf("\n");
			n=0	;
			k = k+1;
		}
		n++;
	}
	
}
