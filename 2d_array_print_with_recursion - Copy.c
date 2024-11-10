//Write a program in C to multiply two matrix using recursion

#include<stdio.h>
main()
{
	int a[2][2], b[2][2] ;
	int i=0 , j=0;
	printf("enter first matrix:\n");
	input(&a, i, j);
	display(a, i, j);
			
}
int input(int a[2][2] , int i, int j)
{
	printf("element: a[%d][%d]: ", i ,j);
	scanf("%d",&a[i][j]);

	if(i==0 || i==1)
	j++;
	if(j==2)
	{
		j=0;
		i++;
	}
	if(i==2)
	return ;

	input(a, i, j);
	
}
int display(int a[2][2] , int i, int j)
{
	printf("%d ",a[i][j]);


	if(i==0 || i==1)
	j++;
	
	if(j==2)
	{
		j=0;
		i++;
		printf("\n");
	}
	if(i==2)
	return ;

	display(a, i, j);
}

