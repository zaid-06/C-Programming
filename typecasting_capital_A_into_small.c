// Wac program using implicit type casting to capital letter into small 

#include<stdio.h>
main()
{
	char letter = 'Z';
	int asciiNo = (int)letter + 32;
	printf ("%c", (char)asciiNo);
	printf("\n\n");
	printf("using function \n");
	zaid();
}
void zaid()
{
	
    char letter = 'z';
	int asciiNo = (int)letter ;
		
	if (asciiNo >= 97 && asciiNo <= 122)
	{
		asciiNo = asciiNo - 32;
	}
	else {
		asciiNo = asciiNo + 32;
	}
	
	printf("%c", (char)asciiNo);

}
