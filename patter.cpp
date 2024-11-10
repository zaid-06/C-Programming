//#include<stdio.h>
//main()
//{
//	int i , j, n, k=0;
//	
////	printf("enter a number ");
////	scanf("%d",&n);
////	printf("%d\n",n);
//	for(i=0 ; i<=10 ; i++);
//	{
//	
//		
//		for(j = 0 ; j<=10 ; j++)
//		{
//			printf("*");
////			if(j>=n/2-k && j<= n/2+k)
////			{
////				printf("+");
////			}
////			else
////				printf(" ");
//		}
////		k= k+1;
//		printf("\n");
//	}
//}



#include<stdio.h>
 main()
{
	int i , j, n, k=0;
		printf("enter a number ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		for(j=1 ; j<=n*2; j++)
		{
			if(j>=n-k && j<= n+k)
			{
				printf("_");
			}
			else
				printf(" ");
//				printf("*");

		}
		k++;
		printf("\n");
	}
	
}
