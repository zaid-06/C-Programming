#include<stdio.h>
main()
{
	char s[10]={'Z','A','I','D','\0'} ;
	int i;
	
	printf("%s\n", s);
	//or
	puts(s);
	// or 
	for (i = 0 ; s[i] != 0 ; i++ )
	{
		printf("%c", s[i]);
		
	}
	printf ("\n");
	//or
	or();
	//or
	by_user();

	
} 
//function 1
by_user()
{
	char s[10];
	printf("enter your name :");

	scanf("%s",&s[4]);
	puts(&s[0]);
	
	
}
//function 2
or()
{
	char s[10]="abcd";
	printf("%s\n", s);
}

