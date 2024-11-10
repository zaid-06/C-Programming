 #include<stdio.h>
main()
{
	int i, n, sum, N, add;
	printf("enter a natural number:");
	scanf("%d",&N);
	for (n=1; n<=N; n++)
	{
		add=0;
		for(i=1; i<=n; i++)
		{
			add = add + i;
			
		}
		sum = sum + add;
	}
	printf("sum is %d",sum);
}

