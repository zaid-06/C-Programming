
#include<stdio.h>
heapInsert()
{
	int heap[20] , i ,x=0, j;
	int data , k;
	printf("how many number you want to store in heap: ");
	scanf("%d",&k);
	while(x<k)
	{
		printf("enter a number to store in heap: ");
		scanf("%d",&data);
	
	    i= x;
		while(1)
		{
			heap[i] = data;
			if(heap[(i-1)/2] <data)
			{
				heap[i] = heap[(i-1)/2];
				i= (i-1)/2;	
	       	}
	       	else
	       	{
	       		heap[i] = data;
	       		break;
		    } 	 	
		}
		x++;
	
	}
	for(i=0; i<k; i++)
	printf("%d ",heap[i]);
	
}

main()
{
	heapInsert();
}






