#include<stdio.h>
#include<string.h>

main(){
	
		int  i= 1, z=0 ,sum , k = 0, a ,b,c,d,e,f,g,h ;
//		double *y = &i
	for (i=1  ; i <= 90 ; i= i+2 )
	{
		
		for (a=1  ;  a<= 90 ; a= a+2 )
		{
			for (b=1  ; b <= 90  ; b= b+2 )
			{
				for (c=1  ; c <= 90  ; c= c+2 )
				{
					for (d=1  ; d <= 90 ; d= d+2 )
					{
						for (e=1  ; e <= 90 ; e= e+2 )
						{
							for (f=1  ; f <= 90 ; f= f+2 )
							{
								for (g=1  ; g <= 90 ; g= g+2 )
								{
									for (h=1  ; h <= 90 ; h= h+2 )
									{
										sum = i + a +b +c +d +e +f +g+h ;
										if (sum == 91  )
										{
											printf("%d  %d   %d  %d   %d  %d  %d  %d  %d   ", i ,a ,b ,c ,d ,e, f, g, h );
											printf("done \n");
//											printf("%d\n",h);
											usleep(900000);
									
											
											
										}
										
										
									}
									
								}
								
							}
							
							
						}
						
					}
					
				}
				
			}
		
		}
//		printf("a=%d  a=%d   a=%d  a=%d   a=%d   a=%d   a=%d  a=%d   a=%d ", i ,a ,b ,c ,d ,e, f, g, h );
//											printf("done ");
		
	
	
		
	}
	
	
		
	
}



