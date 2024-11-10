#include<stdio.h>

main()
{
	int a , b ,add , sub , mul , div; // variable declaratio
	//input statement 
	printf ("enter value a:\n ");
	scanf("%d",&a);
	printf("enter value b:");
	scanf("%d",&b);
	//arithematic expression
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	//output statement 
	
	printf("\nadd=%d",add);
	printf("\nsub=%d",sub);
	printf("\nmul=%d",mul);
	printf("\ndiv=%d",div);
				
}
