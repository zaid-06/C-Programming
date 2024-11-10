

#include<stdio.h>
main()
{
		

	
			int binary[32];
		int binary2[32],  power, temp, n,i, j=0, sum=0;
		long int bin ;
		printf("enter binary number: ");
		
		scanf("%d",&bin);
		while(bin!=0)
		{
			binary[j]=bin%10;  
			bin=bin/10;        
		     
			j++;
		}
	
	     
		for(i=0; i<j; i++)
		{
			temp = binary[i];
			n=2;
			power=i;    // 2 raised to the power "power"
			if(power==0 || power==1)
			{
				if(power==0)
				n=1;
				else
				n=n*power;	
			}
			else
			{
				while(power!=1)
				{
					n=n*2;
					power--;
				}
				
			}
			binary2[i]= temp *n;	
			printf("%d ",(int)binary2[i]);
			sum=sum+binary2[i];
		}
		
		printf("\n");
		printf("\n decimal = %d\n",sum);
		
   

	
	
}
