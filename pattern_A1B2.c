#include<stdio.h>
main()
{
	int i , j ,k=65, n=1, x=1, t=1, input ;
	printf("enter a number: ");
	scanf("%d",&input );
	for (i=1 ; i<=input  ; i++)
	{
		k=65 ;
		n=1;
		for(j=1 ; j<=2*input-1; j++)
		{
			if(j>=input+1-i && j<=input-1+i && t==0)
			{
				
				if(x==1)
				{
				    printf("%d",n);
				    n++;	
				}
				else{
					
					printf("%c",k);
					k++;	
				
				}
			
			}
			else 
			{
				printf(" ");
			}
			
			t=1-t;
					
		}
//		if(x==1)
//		x=0;
//		else 
//		x=1;
			//or
			x=1-x;
			
		printf("\n");
		
	}
}
