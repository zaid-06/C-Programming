
#include<stdio.h>
main()
{
	char a[100];
	int i, count=0, x=0;
	printf("write a sentence : ");
	gets(a);
	
	for(i=0 ; i<strlen(a); i++)
	{
		if((a[i]==' ' || a[i]==',' || a[i]=='.') && x==0 )
		{
			count++;		
		}
		
		if(a[i]==' ' || a[i]==',' || a[i]=='.')
			x=1;
		else
			x=0;
			
	}
	printf("number of word in this sentence is %d ",count+1);
}
