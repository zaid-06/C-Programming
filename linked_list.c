#include<stdio.h>

struct node
{
	int info;
	struct node *link;
	
};
struct node *START=NULL;
struct node* createnode()

{	
	struct node *n;
	n= (struct node* )malloc(sizeof(struct node ));
	return(n);
	
}
void insertnode()
{
	struct node * temp, *t;
	temp=createnode();
	printf ("enter a number");
	scanf("%d",&temp->info);
	temp->link == NULL;
	if(START==NULL)
	{
		START =temp;
		
	}
	else
	{
		t=START;
		while(t->link!=NULL)
		{
			t=t->temp;
		}
		t->link=temp;
		
	}
	
	
	
}
