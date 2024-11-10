// Write a program to store and print the roll no., name , age and marks of a student using structures.
#include<stdio.h>
struct student
{
	int rollno;
	char *name;
	int age ;
	int marks ;
	
}
main()
{	
	struct student v2, v = 	{ 60, "zaid", 18, 345 };
	v2.name = "hello	";
	
	printf("name: %s\nroll no: %d\nage: %d\nmarks: %d", v2.name , v.rollno, v.age, v.marks);
	
}
