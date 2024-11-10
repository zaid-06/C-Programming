#include<stdio.h>
#include<windows.h>
main()
{
	int i;
//	printf("%c%d",10, a);  // new line
//	printf("\n%c%d",32, a); // space
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_INTENSITY);
	for(i=0; i<260; i++)
	{
		printf(" %d=%c\n",i , i);
	}
	
}
