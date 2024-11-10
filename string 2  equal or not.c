// Write a program to compare if the two strings entered by user are equal or not without using predefined String functions.
#include<stdio.h>
main()
{
	printf("enter 2 string and check each string equal or not\n\n");
	char a[20], b[20];
	int i , x=0;
	printf("enter first string: ");
	gets(a);
	printf("enter second string: ");
	gets(b);
	if (strlen(a)==strlen(b))
	{
		for(i=0 ; i<strlen(a) ; i++)
		{
			if(a[i]!=b[i])
			{
				printf("not equal");
				x++; 
				break;  	
			}		
		}
		
	}
	
	else
	{
		printf("not equal");
		x++;
	}
		
	
	
	if(x==0)
	printf("equal");
	
	
		
}






