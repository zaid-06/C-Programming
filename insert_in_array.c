//Write a program in C to insert New value in the array (unsorted list )

#include<stdio.h>
main()
{
	int a[10],b[10];
	int i, j, insert,y, n;
	
	  printf("Input the number of elements to be stored in the array :");
    scanf("%d",&n);
   
	
 	 printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&a[i]);
		  
	    }
	  printf("Input the value to be inserted :");
	  scanf("%d",&insert);
	 for(i=0; i<n; i++)
    {
    	
    		if(insert >= a[i] && a[i] >=y)
	        {
	        	y=a[i];
	        	
	        }
     
 	}
 	for(i=0 ; i<n; i++)
 	{
 		if(y==a[i])
 		{
 			
 			printf("%d ",a[i]);
 			printf("%d ",insert);
		 }
		 else
		 printf("%d ",a[i]);
	 }
 	
}
