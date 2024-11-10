#include<stdio.h>
main()
{

  int i , *rtrn;
  int a[10], num;
  printf("enter a number: ");
  scanf("%d",&num);
  
  rtrn = table(num , &a );
  
  for(i=1; i<=10 ; i++)
  	printf("%d ", *(rtrn+i));
//  	printf("%d ", rtrn[i]);
  
}
int table(int a, int* b)
{
	int i;
	for(i =1 ; i<=10 ; i++)
	{
		b[i] = i*a;
	}
	return b;
}
//#include<stdio.h>
//main()
//{
//
//  int i , rtrn;
//  int a[10], num;
//  printf("enter a number: ");
//  scanf("%d",&num);
//  
//  table(num , &a );
//  
//  for(i=1; i<=10 ; i++)
//  	printf("%d ", a[i]);
//  
//}
//table(int a, int* b)
//{
//	int i =1;
//	for(i =1 ; i<=10 ; i++)
//	{
//		b[i] = i*a;
//	}
//
//}








