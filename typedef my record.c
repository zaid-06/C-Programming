#include <stdio.h>

typedef  struct student
{
	int rollno;
	char name[20];
	int age ;
	char course[20];
		
}STUDENT;

main()
{
	STUDENT s1;
	strcpy(s1.name,"zaid");
	s1.age =18;
	s1.rollno=60;
	strcpy(s1.course , "computer science");
	printf("name: %s\ncourse: %s \nrollno: %d\nage: %d",s1.name, s1.course, s1.rollno, s1.age );
	
}

