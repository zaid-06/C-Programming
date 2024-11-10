//C Program to check whether a string is palindrome or not
//example: 
//aba: palindrome
//abcba: palindrome
//abc: not palindrome
//abcba: not palindrome
#include<stdio.h>
main()
{
	int i, len, x=0;
	char a[10];
	printf("enter a string to cheak string is palindrome or not.");
	gets(a);
	
	len = strlen(a);
	for(i=0 ; i<len/2; i++)
	{
		if (a[i] != a[(len-1)-i])
			x++;	
	}
	if(x==0)
		printf("palindrome");
	else 
	    printf("not palindrome");
	
	
	
}





