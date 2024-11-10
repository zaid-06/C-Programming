#include<stdio.h>
main()
{
	char s[3][10];
	int i ;
	printf("enter three strings: \n\n");
	for(i=0 ; i<=2; i++)
	{
		if (i==0)
		{
			printf("enter first name: ");
			gets(&s[i][0]);
		}
		if(i==1)
		{
			printf("enter second name: ");
			gets(&s[i][0]);
		}
		if(i==2)
		{
			printf("enter third name: ");
			gets(&s[i][0]);
		}
	}
	for(i=0 ; i<=2; i++)
	{
		printf("%s\n", s[i]);
		
	}
}
