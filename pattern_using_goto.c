// using goto statements to print
// *
// **
// ***
// ****

#include<stdio.h>
#include<process.h>
main()
{
	int i=0, x=0;
	
	label1:
	
		x++;
		label2:
		    i++;                 
	        printf ("*");
	
	        if(i==4)
	        exit(0);
	       
	        if(i==x)
	        {
	       		i=0;
	       		printf("\n");
	       	    goto label1;
		    }
		     
    	goto label2;
    
}







