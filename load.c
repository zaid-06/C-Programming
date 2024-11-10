
#include <stdio.h>
#include <unistd.h>
main()
{
	
		const int trigger = 500; // ms
       int second =30 ;
					
        system("cls");

		printf("\n\n\n");
		printf("\t\t\t locked fo 30 second\n\n");
      	while(second !=0){
      		
        	printf("\r\t\t\ttry again in ");

            usleep(trigger * 1700);
            printf("%d second",second);	           
            second--;
         
        }
	        
	       		 
	    	
	   	    	
}
