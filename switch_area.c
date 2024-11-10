//WAC program using switch statement and accept first letter of shapes (T tringle )
//and print the area of the shape
#include<stdio.h>
main()
{
	char c;
	float b, h, r , area;

	printf ("t= tringle \n");
	printf ("c= circle \n");

	printf("please enter your choice: ");
	
	scanf("%c",&c);
	switch(c)
	{
		case 't':
			 
		     printf("Enter base and height: ");
		     scanf("%f %f", &b, &h);
		
		     area = (0.5 * b * h);                               	
		     
		     printf("Area of triangle= %.2f cm\n", area );
		     break;
	    case 'c':
	     	
		     printf ("enter radius of circle :");
		   	 scanf("%f",&r);
		     area = 3.14 * r * r;
			 printf("area of circle is %f\n", area);
	
		     break;
		default :
		     printf("incorrect input please correct ");
			      	 
	}
	
}

