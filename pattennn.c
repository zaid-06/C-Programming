#include<stdio.h>
main()
{
	int i, j, k=1;
	
//	printf("zaid ali ");
//	scanf("%d")
    for(i=1 ; i<=5 ; i++){
    	for (j=1 ; j<=7 ; j++)
    	{
    		if(j>=5-k && j <= 3+k)
    		{
    			printf("%d", k);
    			
			}
			else 
			{
				printf(" ");
			}
	    
		
		}
		if(k<i)
		k++;
		else 
		k--;
		printf("\n");
	}
    
}
