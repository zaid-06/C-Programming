#include<stdio.h>
//Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100)
// using a structure named Marks having elements roll no., name, chem_marks,
//  maths_marks and phy_marks and then display the percentage of each student.

struct result 
{
	char *name;
//	int roll;
//	int chem;
//	int phy;
//	int math;
	int roll;
	char *clas;
	
}*ptr , e1;
main()
{
	int i, total;
	float percent;
	struct result array[5];

//	printf("%d", sizeof(r1));
	ptr = &e1;
	input();
	display();
	
	
	
	
	
	
	
//	printf("enter record of 5 student:");
//	for(i=0 ; i<5 ; i++)
//	{
//		printf("\nstudent %d\n",i+1);
//		
//		printf("enter name: ");
////			fflush(stdin);
////	        gets(array[i].name);
//		 scanf("%s",array[i].name);
//	    printf("enter roll number: ");
//	    scanf("%d",&array[i].roll);
//	    printf("enter  chemistry marks: ");
//	    scanf("%d",&array[i].chem);
//	    printf("enter physics marks: ");
//	    scanf("%d",&array[i].phy);
//		printf ("enter math`s marks: ");
//		scanf("%d",&array[i].math);
//				
//	}
//	for(i=0 ; i<5; i++)
//	{
//		printf("\n\nstudent %d",i+1);
//		
//		printf ("\nname: %s", array[i].name);
//		printf("\nroll number %d",array[i].roll);
//		printf("\nchemistry marks: %d",array[i].chem);
//		printf ("\nphysics marks: %d ",array[i].phy);
//		printf("\nmath marks: %d",array[i].math);
//		total=array[i].chem + array[i].phy + array[i].math;
//		percent = (float)total / 300 * 100.0;
//
//		printf(" \n\npercent: %f",percent);
//		
//	}
	
}







void input (){
	printf("name\troll\tclass");
	scanf("\n%s\t%d\t%s", &e1.name ,&e1.roll, &e1.clas)	;
	
}
void display(){
		printf("name\troll\tclass");
	printf("%s\t%d\t%s", *ptr->name ,ptr->roll, *ptr->clas)	;
}











