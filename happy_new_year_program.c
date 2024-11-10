 # include <stdio.h> 
    # include <stdlib.h> 
    
    void hny() 
    { 
    	int i,j; 
    	for(i=0;i<=5;i++) 
    	{ 
    		for(j=0;j<=6;j++) 
    		{ 
    			if((i==0&&j%3!=0)||(i==1&&j%3==0)||(i-j==2)||(i+j==8)) 
    				printf("     2020     "); 
    			else  if(i==2&&j==3) printf("\033[31;5;1mHappy New Year\033[0m"); else 
    				printf("              "); 
    		} 
    		printf("\n\n\n\n\n"); 
    		 
    	} 
    } 
    void main() 
    { 
    	system("clear"); 
    	printf("\n\n\n"); 
    	hny(); 
        printf("\033[34;5;1m\n\nA very happy new year wishes from Prince to you and your family.\033[0m\n"); 
    } 
