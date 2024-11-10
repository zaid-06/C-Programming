// highest common factor ( HCF )

#include <stdio.h>


main()


{
	int a ,b ,i  ;
	printf ("enter two numbers ");
	scanf("%d%d", &a ,&b );
	i=a<b?a:b;  
	
	
	for (i  ; i>=1 ; i--)
	{
		if(a%i==0 && b%i==0)
		{
			break;
			
		}
		
	}
	 printf ("HCF is %d" ,i);
}
