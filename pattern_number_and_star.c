// 1
// 2 * 3
// 4 * 5 * 6
// 7 * 8 * 9 *10
//11 *12 *13 *14 *15
#include<stdio.h>
main()
{
	by_me();
	printf("\n");
	by_saurabh();
	
}

by_me(){
		int i,j,k=1;
	for(i=1 ; i<=5 ;i++)
	{
		
		
		for(j=1 ; j<=i ; j++)
		{

			if(k<=9)
			    printf(" %d",k);
			else
		    	printf("%d",k);
			if(k==3||k==6||k==10||k==15 || k==1)
		    ;
			else
			    printf(" *");
			k++;
		}
		printf("\n");
	}
}

	
by_saurabh()
{
	int i, j, flag, k=0, p;
	for(i=1 ; i<=5; i++)
	{
		if(i%2==1)
		k=k+1;
		else
		{
			k--;
			k=k+i;
		}
		flag = 1;
		p=k;
		for (j=1;j<=9;j++)
		{
			if(j<=2*i-1)
			{
				if(flag==1)
				{
					printf("%2d",p);
					if(i%2)
					{
						p++;k++;
					}
					else
					p--;
				}
				else
				{
					printf(" *");
						
				}
				flag=1-flag;	
			}
			else
				printf("  ");
				
		}
		printf("\n");
	}
}








