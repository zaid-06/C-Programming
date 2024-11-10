#include<stdio.h>
#include <stdio.h>

void sort(int arr1[], int n)
{
    
    int  i, j, tmp;

    
    for(i=0;i<n;i++)
    {
	    printf("element - %d : ",i);
	    scanf("%d",&arr1[i]);
	}

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr1[j] < arr1[i])
            {
                tmp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tmp;
            }
        }
    }
   
    
}
binarySearch(int arr1[], int n , int item)
{
    int l =0 , u = n-1 , m;
    while(l<=u)
    {
        m = (l+u)/2;
        if(item == arr1[m])
        {
            printf("search successful at index %d ", m);
            return; 
        }
            

        else if (item>arr1[m])
            l= m+1;
            else
            u=m-1;
            
    }
    printf("search unsuccessful ");
    
}
main()
{
    int arr[100] , i ,num, item;
    printf("Input the size of array : ");
    scanf("%d", &num);
    printf("Input %d elements in the array :\n",num);
    sort(&arr , num);
    for(i=0; i<num; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\nenter number you want to search: ");
    scanf("%d",&item);
    binarySearch( arr,  num , item);


    

}