// /* Read input from STDIN. Print your output to STDOUT*/
// #include<stdio.h>
// int main()
// {
// 	 int arr[10], i,j, temp;
   
//     // printf("enter 10 number: ");

//     for(i=0 ; i<7; i++)
//     {
//         printf("element arr[%d] ", i);
//         scanf("%d",&arr[i]);
//     }
//     for(i=0 ; i<3; i++)
//     {
//         // if(arr[i] > arr2[0])
//        for(j=i+1 ; j <7 ; j++)
//        {
//            if(arr[i]<arr[j])
//            {
//                temp = arr[i];
//                 arr[i]= arr[j];
//                 arr[j]= temp;
//            }
//        }
        
      
//     }
//     printf("third largest number: %d ",arr[2]);

//     return 0;
// 	//Write code here
// }
/* Read input from STDIN. Print your output to STDOUT*/
#include<stdio.h>
int main()
{
	 int arr[10] ={25,26,7,8,10,11,79};
	 int  i,j, temp;
   
    // printf("enter 10 number: ");

    // for(i=0 ; i<7; i++)
    // {
    //     printf("element arr[%d] ", i);
    //     scanf("%d",&arr[i]);
    // }
	
    for(i=0 ; i<3; i++)
    {
        // if(arr[i] > arr2[0])
       for(j=i+1 ; j <7 ; j++)
       {
           if(arr[i]<arr[j])
           {
               temp = arr[i];
                arr[i]= arr[j];
                arr[j]= temp;
           }
       }
        
      
    }
    printf("\n%d",arr[2]);

    return 0;
	//Write code here
}
