//Write a program in C to multiply two matrix using recursion

#include<stdio.h>
main()
{
	int a[2][2], b[2][2] ;
	int i=0 , j=0;

	input(&a,&b, i, j);
	printf("first matrix: \n");
	display1(a, i, j);
	printf("\nsecond matrix: \n");
	display2(b, i, j);
		
}
int input(int a[2][2], int b[2][2] , int i, int j)
{
	printf(" enter element for first matrix: a[%d][%d]: ", i ,j);
	scanf("%d",&a[i][j]);
	printf("enter element for second matrix: a[%d][%d]: ", i ,j);
	scanf("%d",&b[i][j]);
	if(i==0 || i==1)
	j++;
	
	if(j==2)
	{
		j=0;
		i++;
	}
	if(i==2)
	return ;

	input(a,b, i, j);
	
}
int display1(int a[2][2] , int i, int j)
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

	display1(a, i, j);
}int display2(int b[2][2] , int i, int j)

{
	printf("%d ",b[i][j]);
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

	display2(b, i, j);
}





