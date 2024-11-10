#include<stdio.h>
main()
{
	int i , j, temp ;
	int arr[8] = {6,4,7,8,3,10,5,9};
	for(i=1 ; i < 8; i++)
	{
		temp = arr[i];
		j = i-1;
		while( j >= 0 && temp< arr[j]  )
		{
			arr[j+1] = arr[j];
			j--	;	
		}
		arr[j+1] = temp;
	}
	for(i=0 ; i<8 ; i++)
		printf("%d ", arr[i]);	
}
