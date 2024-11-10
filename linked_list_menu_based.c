#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node * link ;
	
};

struct node *START = NULL;
struct node* create_node()
{
	struct node *n;
	n= (struct node*)malloc(sizeof (struct node));

	return(n);
}
void insert_node()
{
	struct node *temp ,*temp2;
	temp=create_node();
	
	printf("enter a number: ");
	scanf("%d",&temp->info);
	temp->link = NULL;
	
	if(START== NULL)
	{
		START = temp ;
		
	}
	else 
	{
		temp2= START ;
		while (temp2->link!=NULL)
		{
			temp2 = temp2->link;
		}
		temp2->link=temp;
		
	}

	
}
delete_node()
{
	struct node *dlet , *wait;
	int select, i=0 ;
	

	if(START == NULL)
	{
		printf("List is empty");	
	}
	else
	{
		printf("which number do want to delete: ");
		scanf("%d",&select);
		dlet = START ;
		wait = dlet;
		
		while(dlet!=NULL)
		{
			if(dlet->info == select)
		    {
				(dlet-i)->link = dlet->link	;
//				(START-1)->link = START->link;	
			}
			i++;
			dlet= dlet->link;
//			START= START->link;
		}
		START=wait;
		
		
	}
	
}
viewList()
{
	struct node *t;
	if (START == NULL)
	{
		printf("list is empty");
		
	}
	else
	{
		t= START ;
		while (t!= NULL)
		{
			printf("%d ",t->info);
			t= t->link;
		}
	}
}
int menu()
{
	int ch;
	printf("\n\n1. add value to the list ");
	printf ("\n2. delete value");
	printf("\n3. view list ");
	printf("\n4. exit");
	printf("\nenter your choice: ");
	scanf("%d", &ch);
	return(ch);
}
void main()
{
	while(1)
	{
		switch(menu())
		{
			case 1:
				insert_node();
				break;
				
			case 2:
				delete_node();
				break;
				
		    case 3:
		    	viewList();
		    	break;
		    case 4:
		    	exit(0);
		    default:
		    	printf("invilid choice");
		}
	}
}



