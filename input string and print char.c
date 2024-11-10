#include<stdio.h>
main()
{
	char s[20];
	int i;
	
	printf("enter your name: ");
	scanf("%s",s);
	for(i=0 ; i<strlen(s); i++)
	{
		printf("%c\n",s[i]);
	}
	
}
