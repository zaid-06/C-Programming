//wac program accept number of 5 subject from keyboard and print total percent (%) and print student grades if 
//	    per >60 =first 
//	    per >= 45 second 
//	    per >=30 third 
//	    per <30 and get marks  less than 30 in any subject then "fail".......
#include<stdio.h>
#include<conio.h>
main()
{
	int phy, chem, hin, eng, math, total;
	float percent ;
	printf("physics's marks: ");
	scanf("%d",&phy);
    while (phy > 100 || phy < 0)
	{
		printf("Error! number should in range of (0 to 100)\n");
		printf("enter marks again: ");
		scanf("%d",&phy);
	}
	
	printf("chemistry's marks: ");
	scanf("%d",&chem);
	while(100<chem || 0>chem)
	{
		printf("Error! number should in range of (0 to 100)\n");
		printf("enter marks again: ");
		scanf("%d",&chem);
	}
	printf("math's marks: ");
	scanf("%d",&math);	
	while(100<math || 0>math)
	{
		printf("Error! number should in range of (0 to 100)\n");
		printf("enter marks again: ");
		scanf("%d",&math);
	}
	printf("hindi's marks: ")	;
	scanf("%d",&hin);
	while(100<hin  || 0>hin)
	{
		printf("Error! number should in range of (0 to 100)\n");
		printf("enter marks again: ");
		scanf("%d",&hin);
	}
	
	
	printf("enlish's marks:");
	scanf("%d",&eng);
	while(100<eng  || 0>eng )
	{
		printf("Error! number should in range of (0 to 100)\n");
		printf("enter marks again: ");
		scanf("%d",&eng);
	}
	printf("\n\n");
	
	total = phy + chem + hin + eng + math;
	

    percent = (float)total / 500 * 100.0;


	
	if(phy< 30 || chem <30 ||  hin <30 ||eng <30 || math<30)
	{
		printf("fail\nbecause \n");
		if(30>phy)
			printf("%your physics marks is  %d \n ",phy);
			
		if (30 > chem)
			printf("your chemistry marks is  %d \n",chem);
			
		if(30 > hin)
			printf("your hindi marks is  %d\n",hin);
			
		if (30 > eng)	
			printf("your english marks is  %d \n",eng );
			
		if ( 30 > math)
			printf("your math marks is  %d\n",math);
				
	}
	else 
	{
		if(percent>= 60.00)
		{
			printf("first division\n");
		}
		else if ( percent>=45.00)
		{
			printf("second division\n");
		}		
		else
		{
			printf("third division\n");
		}
		printf("your total marks = %d\n",total);
		printf("and percent = %.2f",percent);
		
	}
}
