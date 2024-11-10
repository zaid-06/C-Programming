#include <stdio.h>

main()
{
	char s[10]={'z','a','i','d','\0'} ;
	int i ;
	for (i=0 ; i<=4 ; i++)
	printf("%c",s[i]);
	printf("\n");
	
	secondmethod();//s[10]);
//	printf("%c",c);
}

 void secondmethod()//char x[10] )
{
   // int i;
    char s[10]={'z','a','i','d','\0'};
	int i ;
	for (i=0 ; s[i]!='\0' ; i++)
	printf("%c",s[i]);
	
}
