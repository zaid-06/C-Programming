// L C M

#include <stdio.h>
main()


{
	int a ,b ,i  ;
	printf ("enter two numbers ");
	scanf("%d%d", &a ,&b );
	for(i=1 ; i <= a*b ; i++)
	{
	      
		if (i%a==0 && i%b==0)
		{
	    	break; 
		}
	}	
	printf("LCM is %d", i); zaid ali bharat ali bha
	
}
