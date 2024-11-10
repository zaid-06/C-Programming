#include<stdio.h>
struct record 
{
	char name[20];
	char course[10] ;
	int rollno;
	int age;
	long int mobile_no;
	char present[30];
	
};
main()
{
	int num, cnt=0;
	int i;
	char choice ;
	
//    struct record totl_std[] , ;
	struct record totl_std[5];
	strcpy(totl_std[0].name,"zaid");
	strcpy(totl_std[0].course,"BCA");
	totl_std[0].rollno=60;
	totl_std[0].age=18;
	totl_std[0].mobile_no=49;
	strcpy(totl_std[0].present,"dhorha");
	
	strcpy(totl_std[1].name,"shabab");
	strcpy(totl_std[1].course,"engineer");
	totl_std[1].rollno=1;
	totl_std[1].age=25;
	totl_std[1].mobile_no=23244;
	strcpy(totl_std[1].present,"quazi dhorha");
	
	strcpy(totl_std[2].name,"kashif");
	strcpy(totl_std[2].course,"BCA");
	totl_std[2].rollno=61;
	totl_std[2].age=20;
	totl_std[2].mobile_no=7033;
	strcpy(totl_std[2].present,"malathi");
	
	strcpy(totl_std[3].name,"abhishek");
	strcpy(totl_std[3].course,"BCA");
	totl_std[3].rollno=70;
	totl_std[3].age=19;
	totl_std[3].mobile_no=9934;
	strcpy(totl_std[3].present,"ghosi");
	
	strcpy(totl_std[4].name,"amarjeet");
	strcpy(totl_std[4].course,"BCA");
	totl_std[4].rollno=56;
	totl_std[4].age=22;
	totl_std[4].mobile_no=8237;
	strcpy(totl_std[4].present,"jehanabad");
	
	
	

 	 
    	
//    	totl_std+1={"abhishek", "BCA", 45, 19, 4839403, "ghosi"};
	
	
    	
	
//    		totl_std[0] = 
//  	totl_std[2] = {"shabab", "engineer", 1, 25, 43432434, "quezi_dhorha" };
//  	totl_std[1] = {"abhishek", "BCA", 45, 19, 4839403, "ghosi"};
//  	totl_std[3] = {"kashif", "BCA", 61, 20, 73483800, "malathi"};
//  	totl_std[4] = {"deepu", "BCA", 84, 23, 84399308, "jehanabad"};
//	
  
//  	struct record totl_std[] = {
//  			{"ABCD", "XYZ", 87, 89, 90, "rdrtdf"}
//  		
//	  };
  	printf("total student : 5\n");
  	printf("enter any a information to find all information of a student\n");
  	printf ("do you have roll number\n press\ny key or n key :");
  	scanf("%c", &choice);
  	if(choice == 'y' ||choice == 'Y')
  	{
  		printf("enter roll number");
  		scanf("%d", &num);
  		
	}
	else
	{
		printf ("enter mobile number if you dont have mobile number then please go back\n");
		printf("if you have a mobile number please enter: ");
		scanf("%d",&num);
	}
	printf("\n\n");
	for(i=0 ; i<5; i++)
	{
		if(totl_std[i].rollno == num || totl_std[i].mobile_no==num  )
		{
			printf("name:          %s\n",totl_std[i].name );
			
			printf("course:        %s\n",totl_std[i].course );
			printf("roll number:   %d\n",totl_std[i].rollno );
			printf("age:           %d\n",totl_std[i].age );
			printf("mobile number: %d\n",totl_std[i].mobile_no );
			printf("present:       %s\n",totl_std[i].present);
			cnt++;
		}
	}
	
	if(cnt==0)
	{
		
		printf("no student");
		
	}
  
  	
  	
   	
}

