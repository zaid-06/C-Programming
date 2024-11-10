#include<stdio.h>
#include<process.h>
#include<dos.h>
main()
{
	 int h=2, m=8, s=0, x=0, y=5, z=1 , count= 0, i;
	while(!kbhit())
	{
		system("cls");
		printf("\n\n\n\t\t\t");
	    for(i=0; i<=27; i++)
		    printf("%c",178);
	
		printf("\n\t\t\t%c  hour  %c minute %c second %c",178 ,178 ,178 ,178 );
		printf("\n\t\t\t%c   %d%d   %c   %d%d   %c   %d%d   %c\n\t\t\t",178 ,z ,h ,178 ,y, m ,178 ,x ,s ,178);
    	for(i=0; i<=27; i++)
	    printf("%c",178);
	
	    if(x==6)
	    {
	    	m++;
	    	if(y==5 && m == 10)
	    	{
	    		h++;
	    		if(h==10 )
	    		{
	    			z++;
	    			h =0;
				}
				if(h==3 && z==1)
				{
					z=0;
					h=1;
				}
	    		m =0;
	    		y= 0;
			}
			if(m==10)
			{
				y++;
				m=0;
		    }
	    	s=0;
	    	x =0;
		}
		if(s==9)
		{
			x++;
			s=-1;	
		}
	
		s++;
		usleep(500 * 1730);
			
	}
}






