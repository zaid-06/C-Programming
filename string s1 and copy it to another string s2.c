//Write a program to enter a string s1 and copy it to another string s2.
#include<stdio.h>
main()
{
	int i , length;
	 
	char a[20], b[20];
	printf("enter a string: ");
	gets(a);
	length = strlen(a) ;
	for(i=0; i<=length; i++)
	{
		b[i]=a[i];
		
	}
	printf("%s",b);
}
