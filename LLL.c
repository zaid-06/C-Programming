#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
void insert_AT_Location();
void insert_AT_Begin();
void insert_AT_End();
void delete_AT_Begin();
void delete_AT_End();
void delete_AT_Location();
void display();
void Update();
void Search();
void Count();
void Exit();
struct LLL
{
	char name[20];
	int roll;
	struct LLL*next;
}*head,*tail,*temp,*ptr,*fresh;
static int c;
void main()
{
	system("cls");
	char choice;
	int option;
	head=NULL;
do
{
	printf("\n\n************Linear Linked List************\n\n");
	printf("\n press 1 for insert AT Begin");
	printf("\n press 2 for insert at end");
	printf("\n press 3 for insert at location");
	printf("\n press 4 for delete at begin");
	printf("\n press 5 for delete at end");
	printf("\n press 6 for delete at location");
	printf("\n press 7 for display");
	printf("\n press 8 for update");
	printf("\n press 9 for searching record");
	printf("\n press 10 for count record");
	printf("\n press 11 for quit");
	printf("\n\n\n enter your option");
	scanf("%d",&option);
	
	switch(option)
	{
		case 1:
		insert_AT_Begin();break;
		case 2:
		insert_AT_End();break;
		case 3:
		insert_AT_Location();break;
		case 4:
		delete_AT_Begin();break;
		case 5:
		delete_AT_End();break;
		case 6:
		delete_AT_Location();break;
		case 7:
		display();break;
		case 8:
		Update();break;
		case 9:
		Search();break;
		case 10:
		Count();break;
		case 11:
		exit(0);break;
		default:
		printf("\n not a valid option");
	}//switch close
	printf("\n are  you enter more option[y/n]");
	choice=toupper(getche());   system("cls");
}while(choice!='N');
getch();
}
void insert_AT_Begin()
{
	fresh=(struct LLL*)malloc(sizeof(struct LLL));
	fflush(stdin);
	printf("\n enter your name");
	gets(fresh->name);fflush(stdin);
	printf("\n enter your roll no");
	scanf("%d",& fresh->roll);
	fresh->next=NULL;
	if(head==NULL)
	{
		head=tail=fresh;
		c++;
	}
	else
	{
		fresh->next=head;
		head=fresh;
		c++;
	}
	printf("\n record is added");
}
void insert_AT_End()
{
	fresh=(struct LLL*)malloc(sizeof(struct LLL));
	fflush(stdin);
	printf("\n enter your name");
	gets(fresh->name);fflush(stdin);
	printf("\n enter your roll no");
	scanf("%d",& fresh->roll);
	fresh->next=NULL;
	if(head==NULL)
	{
		head=tail=fresh;
		c++;
	}
	else
	{
		tail->next=fresh;
		tail =fresh;
		c++;
	}
	printf("\n record is added");
}
void insert_AT_Location()
{
	 int i,location;
	 printf("\n enter your location for adding record");
	 scanf("%d",& location);
	 if(location==1)
	 insert_AT_Begin();
	else
	{   	i=1;
		ptr=head;
		while(i<location&&ptr!=NULL)
		{
			temp=ptr;
			ptr=ptr->next;
			i++;
		}
		if(i==location)
		{
			fresh=(struct LLL*)malloc(sizeof (struct LLL));
			fflush(stdin);
			printf("\n enter your name");
			gets(fresh->name);fflush(stdin);
			printf("\n enter your roll no");
			scanf("%d",&fresh->roll);
			fresh->next=NULL;
			temp->next=fresh;
			fresh->next=ptr;
			c++;
		}
	}
	printf("\n record is added");
}
void delete_AT_Begin()
{
	if(head==NULL)
	{
	       printf("\n record not found");
	       getch();
	}
	else
	{
		ptr=head;
		head=head->next;
		ptr->next=NULL;
		printf("\n delete record will be name=%s,roll=%d",ptr->name,ptr->roll);
		free(ptr);
		c--;
	}
	printf("\n record is added");
}
void delete_AT_End()
{
	if(head==NULL)
	{
		printf("\n record not found");
		getch();
	}
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
		{
			temp=ptr;
			ptr=ptr->next;
		}
		tail=temp;
		tail->next=NULL;
		printf("\n name=%s,roll=%d");
		ptr->name;
		ptr->roll;
		free(ptr);
		c--;
}	}
 void delete_AT_Location()
{
	int Location,i;
	printf("\n enter your Location for removing record");
	scanf("%d",&Location);
	if(Location==1)
	delete_AT_Begin();
	else
	{
		i=1;
		ptr=head;
		while(i<Location&&ptr!=NULL)
		{
			temp=ptr;
			ptr=ptr->next;
			i++;
		}
		if(i==Location)
		{
			temp->next=ptr->next;
			ptr->next=NULL;
			printf("\n enter your name");
			printf("\n enter your roll");
			free(ptr);
		}
	}
	printf("\n record is added");
}
void display()
{
	if(head==NULL)
	{
		printf("\n no record found");
		getch();
	}
	else
	{
		printf("\n name\t\t roll no\n");
		for(ptr=head;ptr!=NULL;ptr=ptr->next)
		printf("\n %s\t\t%d",ptr->name,ptr->roll);
	}
}
void Update()
{
	int n;
	printf("\n enter your roll no");
	scanf("%d",& n);
	if(head==NULL)
	{
		printf("\n no record found");
		getch();
	}
	else
	{
		for(ptr=head;ptr!=NULL;ptr=ptr->next)
		{
			if(n==ptr->roll)
			{
				fflush(stdin);
				printf("\n enter your name");
				gets(ptr->name);
			}
		}
	}
}
	void Search()
	{
		int n; int f=0;
		printf("\n enter your roll no");
		scanf("%d",& n);
		if( head==NULL)
		{
			printf("\n no record found");
			getch();
		}
		else
		{
			for(ptr=head;ptr!=NULL;ptr=ptr->next);
			{
				if(n==ptr->roll)
				f=1;
			}
			if(f==1)
			printf("\n it is available");
			else
			printf("\n it is not available");
		}
	}
	void Count()
	{

	printf("\n total record=%d",c);
	}

























