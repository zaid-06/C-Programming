// Write a program in C to sort elements of array in ascending order.

#include<stdio.h>
void main()
{
	int a[100];
	int i=0, j, t, n;
	printf("What number do you want to store in array... please enter: \n" );
	printf("__________________________________________________________\n" );
	scanf("%d",&n);
	printf("enter elemet: \n");
	printf("_____________ \n");
	for (i=0 ; i<n ; i++)
	{
		printf("element- %d: ",i);
		scanf("%d",&a[i]);
	}

	for(i=0 ; i<n; i++)
	{
		j=i;
		for(j+1 ; j<n ; j++)
		{
			if(a[i]>a[j])
			{
				//swap
				t=a[i];
				a[i]=a[j];
				a[j]=t;		
				
			}	
		}
		
	}	
	printf("\nElements of array sorted in ascending order:\n");
	for(i=0; i<n; i++)	
	{
		printf("%d ",a[i]);
	}
	
	
}
