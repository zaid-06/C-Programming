/* write a menu driven program with the fllowing option
1.  addition 
2. nomber is  prime or not 
3. printing first n natural number  
4. max value of 3 niumber
*/
 #include <stdio.h>
// #include <conio.h>
 
  main()
  {
  
		int a,choice,b,c,n=0;
		while(1)
		{
		
			printf("\n\n1 addition");
			printf("\n2 number is prime or not ");
			printf("\n3 printing first n natural number ");
			printf("\n4 max value of 3 number");
			printf ("\n5 exit ");
			printf( "\n\n enter your choice  :");
			scanf("%d",&choice);
			switch(choice)
			{
				case 1:
					printf("enter two number: ");
					scanf("%d%d",&a,&b);
					c=a+b;
					printf("\n sum is =%d",c);
					break;
				case 2:
					printf ("enter a number: ");
					scanf("%d",&b);
					for(a=1;a<=b;a++)
					{
					
						if(b%a==0)
						{
							n++;
							
						}
					}
					if(n==2)
					{
						printf("number is prime");
					}
					else
					{
						printf("number is not prime");
						
					}
					break;
					
				case 3:
					printf("enter a number");
					scanf("%d",&b);
					for(a=1;a<=b;a++)
					{
						printf("%d",a);
						
					}	;
					break;
				case 4:
					printf("enter three number :");
					scanf("%d%d%d",&a,&b,&c);
					if(a>b&&a>c)
					{
						printf("%d  is greater number",a);
					
					}
					if(b>a&&b>c)
					{
						printf("%d  is greater number  " ,b);
						
					}
					else
					{
					
						printf("%d  is greater number  ",c);
						
					}	
					break;
					
				case 5: 
					exit(0);
				break;
						
				default:
					printf("invalid choice ");
								
			}	
	
		}
  }
