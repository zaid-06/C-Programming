#include<stdio.h>
#include<windows.h>


main()
{
	int i , j,x,  y=0, z=0, a ,  b , c, k=18, t=12 , t2 =12;
	char happy[30] = {"HAPPY INDEPENDENCE DAY "};
	
	while(1)
	{
//		Sleep(500);
		sleep(0.8);
		system("cls");
		
		printf("\n");
		k = 18;
		x =  1;
		 if(z == 0)
		 	a = 31,	b = 39, c = 32;
		 
		 if(z==1)
		 	a =32, b = 31, c = 39;
		 
		 if ( z==2)
		 	a = 39, b  =32, c = 31;
		  
		for(i=1 ; i<=6 ; i= i+2)
		{
			if(i==1)
			{
				while(k>0)
				{
					printf("\t\t      ");				
					
					if(x <= 2)
					{
						printf("\033[0;%dm",a);
					}	
					else if(x<=4){
					
						printf("\033[0;%dm",b );
					}
					else
						printf("\033[0;%dm", c);
					
					if(x==6)
						x=0;
					if(k<13)
					{
						if(k==t2 || k==t-2 || k==t+2 || k==t2+4 )
						printf("%c\t*  .   %c    %c",178,1 ,3,5);
						else if(k==t-3 || k==t2-4|| k==t-6|| k==t2+6 || k==t+1 )
						printf("%c %c    %c   .    *",178, 248, 5,4);
						else if(k==t2-10 || k==t-8 || k==t2-5 || k==t+8 || k==t2+10 || k==t2+11)
						printf("%c  %c  %c  *     %c",178,6, 5, 248,6);
						else
						printf("%c",178);
					}
					else
						printf("%c",178);	
					
					if(k>=13)                   // flag cloth
					{
						if (k==17||k==18)
							 printf("\033[0;31m");
						if(k==15 ||k==16)
						    printf("\033[0;39m");
						if(k==14 || k== 13)
						    printf("\033[0;32m");
						for(j=1 ;  j<=16 ; j++)	
							printf("%c",219);	          		
					}
					x++;	
					k--;
					printf("\n");
				}
			}
			printf("\t\t");
		    if(i==1)
		    	printf("\033[0;%dm",a);
		    if(i==3)
		    	printf("\033[0;%dm",b);
		    if(i==5)
		    	printf("\033[0;%dm",c);
			for(j=1 ; j<=14 ; j=j+1)
			{
				if(j>=6-i && j<=8+i)
					printf("%c",219);
				else
					printf(" ");
			}
						
			printf("\n");
		}
		printf("\n\n\t");
		printf("\033[0;31m");
		for(j=0; j< 30; j++)
			printf("%c",3);
		printf("\n\t    ");
		for(j=0; j<y  ; j++)
		{
		
			if(j<6){
				printf("\033[0;31m");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_RED);
			}
				
			else if(j<18)
			{
				printf("\033[0;39m");
				  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_INTENSITY);
			}
				
			else
			{
				
				printf("\033[0;32m");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN);
			}
				
			printf("%c",happy[j]);
	    }
	   	printf("\n\t");
		printf("\033[0;31m");
		for(j=0; j< 30; j++)
			printf("%c",3);
		printf("\t\t\tcreated by zaid    ");
		if(y==24)	
			y=0 ;
	    y++;
	    z++;
	    if(z==3)
	       z=0;
	    if(t==0)
	    {
	    	t=12;
			t2 = 12;
		}
	    t=t-3;
	    t2=t2-2;
	    
		
	
	}
	
	
	
	
	
	
}







