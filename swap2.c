#include<stdio.h>
int main()
{
	int a ,b;
	printf("enter two number: ");
	scanf("%d%d",&a, &b);
	printf("a = %d \nb = %d", a , b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("\nafter swap values\n");
	printf("a = %d \nb = %d", a ,b);
	return(1);
}
