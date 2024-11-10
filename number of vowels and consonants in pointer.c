 // Write a program in C to count the number of vowels and consonants in a string using a pointer
#include<stdio.h>
void v_and_c(char *);
main()
{
	char a[10];
	int i;
	for(i=0 ; i<10; i++)
	{
		printf("element - %d : ",i);
		scanf("%s", &a[i]);	
	}
	v_and_c(a);
	
}


void v_and_c(char* p)
{

	int v_cnt=0, c_cnt=0;
	int i;
	char a;
	for(i=0 ; i<10; i++)
	{	
		a = *(p + i);
		printf("\nelement - %c: ", a);
		
		if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
		{
			printf("Vowel");
			v_cnt++;	
		}
		else 
		{
			printf("constant");
			c_cnt++;	
		}
	}
	printf("\nNumber of vowels : %d\n", v_cnt);
	printf("Number of constant : %d", c_cnt);
}

