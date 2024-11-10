#include<stdio.h>
#include<stdlib.h>
main()
{
	int *ptr1, *ptr2, sum ,n ,i;
	
	printf("enter the size of array: ");
	scanf("%d",&n);
	ptr1= (int*)malloc(n * sizeof(int));
	ptr2=ptr1;
	printf("enter the elements the array: ");
	for(i=0 ; i<n; i+)
	{
		scanf("%d",ptr1+i);
		sum=sum+ *(ptr1+i);
		
	}
	 
	 printf("array elements: ");
	 for(i=0; i<n; i++)
	 {
	 	printf("%d ",*(ptr2+i));
		
	 }
	 printf(" = addition is %d ", sum);
}
