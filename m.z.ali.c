//Write a program that takes your full name as input and displays the abbreviations of the first 
//and middle names except the last name which is displayed as it is. For example, 
//if your name is Robert Brett Roser, then the output should be R.B.Roser.
#include<stdio.h>
main()
{
	char a[30];
	int i , j, x=0;
	printf("enter a string: ");
	gets(a);
	strlen(a);
	for(i=0 ; i<=strlen(a); i++)
	{
		if(i == 0 || a[i] == ' ' )
		{
			if(i>0)
			{
			  x++;
			  if(x==1)
			  {
			  	a[i] = a[i+1];
			  }
			  
			    	
			}
			if(x<=1)
			{
				printf("%c.",a[i]);	
			}
			
			
			
		}
		if(x==2)
		{
			if(a[i]!=' ')
			printf("%c",a[i]);
		}

	}
	
}
