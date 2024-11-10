#include <stdio.h>
main()
{	
	int a[10] ,sum ,i , c=0, choice ;
	
	 
	printf ("a = add                ");
	printf ("2 = subtruct\n\n");
	printf ("3 = multiplication     ");
	printf ("4 = divide\n\n");
	printf ("5 = reminder           ");
	printf ("6 = power\n\n");
	
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("enter number: ");
			for(i=1 ; i<=9; i++)
			{
				scanf("%d", &a[i]);
			}
			for(i=0 ; i<=9 ; i++)
			{
				sum=sum+a[i];
			}
			printf("sum is =%d",sum);
			break;
		default:
			printf("invalid choice ");	
	}
}
