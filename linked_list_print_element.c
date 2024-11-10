#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *link;
	
};
struct node *START=NULL;
struct node* createnode(int num)
{	
	struct node *n;
	n= (struct node* )malloc(num * sizeof(struct node ));
	return(n);
	
}
void insertnode()
{
	struct node * temp, *t, *more;
	int num, i;
	char c;
	
	printf("enter the size of array: ");
	scanf("%d", &num);
	temp=createnode(num);
	for (i=0; i<num; i++)
	{
		printf("enter number for %d node: ",i+1);
		scanf("%d",&(temp+i)->info);
		if(i>0)
		(temp+(i-1))->link=temp+i;
		if(i+1==num)
		(temp+i)->link=NULL;
		
	}
	START=temp;


	printf("do you want to add more element press [y/ any key]\n");
	c=getche();
	
	
	if(c=='y'|| c=='Y')
	{
		more=(struct node* )malloc(sizeof(struct node ));
		
		printf("\nenter a number: ");
		scanf("%d",&more->info);
		more->link= NULL;
		t=START;
	
		while(t->link!=NULL)
		{
			t=t->link;
		}
		t->link=more;
		
		while(START!=NULL)
		{
			printf("%d ",START->info);
			START=START->link;
		}
		
	}
	else
	{
		printf("\n");
		while(START!=NULL)
		{
			printf("%d ",START->info);
			START=START->link;
		}
	}
	
	
}
void main()
{
    
	insertnode();
	
}






