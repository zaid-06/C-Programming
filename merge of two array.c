		//Write a program in C to merge one sorted array into another sorted array. Go to the editor
		//Pivot element is the only element in input array which is smaller than it's previous element.
		//A pivot element divided a sorted rotated array into two monotonically increasing array.
		//Expected Output :
		//The given Large Array is : 10 12 14 16 18 20 22
		//The given Small Array is : 11 13 15 17 19 21
		//After merged the new Array is :
		//10 11 12 13 14 15 16 17 18 19 20 21 22
		
		
	#include<stdio.h>
	void merge(int , int , int* , int*); 
main()
{
	int a[] = {10,12,14,16,18,20,22,24} , b[]={11,13,15,17,19,21, 23};
	int length_of_a, length_of_b, add;
	
	length_of_a = ( sizeof(a) / sizeof(a[0]) ); // lenght of first  array 
	
	length_of_b=( sizeof(b) / sizeof(b[0]) ); // lenght of second  array 
	
	merge(length_of_a , length_of_b, a, b);  // function call
	

}
	
	
void merge(int  length_of_a , int  length_of_b, int* p , int* q)
{
	int i , divid, add;

	int merg[(length_of_a + length_of_a)] ;
	
	//add  length of first and second array 
	add= length_of_a + length_of_b;
	
	// here 50% value  of add 
	divid = (add/2)+1;
	
	 // merge 
	for(i=0 ; i<divid; i++)
	{
		merg[i*2] = *(p+i);
		merg[(i*2)+1] = *(q+i);
	}
	
	//print first array 
	printf("the given first array : ");
	for(i=0 ; i<length_of_a ; i++)
	{	
			printf("%d ",*(p+i));
	
	}
	
	// print second array 
	printf("\nthe given second array : ");
	for(i=0 ; i<length_of_b ; i++)
	{	
		printf("%d ",*(q+i));
	
	}
	
     // here print merge array 
	printf("\nAfter merged the new Array is : ");
	for(i=0 ; i<add; i++)
	{
		printf("%d ",merg[i]);
		
	}
		
}

