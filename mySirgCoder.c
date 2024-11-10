#include<stdio.h>
main()
{
    int a[10] , i, count ;
    printf("enter 10 number:");
    for(i=0 ; i<10 ;i++)
    scanf("%d",&a[i]);
    for(i=0 ; i<10 ; i++)
    {
        count =0;
        if(a[i]%2==0)
            count++;
        if (a[i]%3 ==0)
            count++;
    
        if(count==1)
        printf("%d ",a[i]);
            
    }

}