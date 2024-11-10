#include <stdio.h>
char* printName(int n);
main()
{
	int n, i;
	char *p;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	p = printName(n);
	
	for(i = 0; i < 5; i++)
	{
		printf( "%c", *(p + i));
	}
}

char* printName(int n)
{
	char name[10] = "";
	switch (n)
	{
		case 0:
			name[0] = "Z";
			name[1] = "E";
			break;
		default:
			name[0] = "O";
			break;
	}
	return &name;
}
