#include<stdio.h>
main()
{
	char str[20];
	int i;
	
	printf("enter a number: ");
	gets(str);
	for(i=0; i<strlen(str); i++)
	{
		str[i]= (int)str[i];
		str[i]= str[i] - 32;
		
		
	}
	printf("%s",str);
	
	
}
