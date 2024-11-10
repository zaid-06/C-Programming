#include <stdio.h>

main()
{
	char s[10]={'z','a','i','d','\0'} ;
	int i ;
	for (i=0 ; i<=4 ; i++)
	printf("%c",s[i]);
	printf("\n");
	
	secondmethod(s[10]);
//	printf("%c",c);
}

 void secondmethod(char x[10] )
{
    int i;
 //   char s[10]={'z','a','i','d','\0'};
 
//	int i ;
	for (i=0 ; x[i]!='\0' ; i++)
	printf("%c",x[i]);
	
}
//main()
//{
//	char *a[20];
//	gets(a);
//	printf("%s",a);
//}
