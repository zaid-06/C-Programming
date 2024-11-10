#include<stdio.h>
int palindrome(char* );
main()
{
	char a[10];
	printf("enter  a string: ");
	gets(a);
	if(palindrome(&a))
	printf("palindrome");
	else
	printf("not palindrome");
	
}
int palindrome(char* s)
{
	int i, l;
	l=strlen(s);
	for(i=0 ; i<l/2; i++)
	{
		if(*(s+i)!= *(s+(l-1-i)))
		return(0);
	}
	return(1);
}
