 #include<stdio.h>
main()
{
	int i =1;
	int num, rtrn;
	printf("enter a number: ");
	scanf("%d",&num);
	for(i=1 ; i<=10 ; i++)
	{
		rtrn = table(i, num);
		printf("%d\n",rtrn);
	}
}

int table(int a , int b)
{
	return a*b;
}
