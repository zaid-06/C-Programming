

#include<stdio.h>
#include<conio.h>
void main()
{
	int i , j , k ;
	while(1)
	{
		system("cls");
		k=1;
		for(i= 1; i<=15; i++)
		{
			printf("\n\t");
			for(j =1 ; j<15; j++)
			{
				if((j<= k || j>= 15-k ) || ( (i!= 1&& i!=15) && (j==5 ||j==10)))
					printf("* ");
				else
				printf("  ");	
			}
			if(i>7)
			k--;
			else
			k++;
				
		}
		
	}
	
}






