#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node * link ;
	
};
int n;

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
deleteNode()
{
	struct node *Delete, *hold;
	int num, size=1;
	if(START!=NULL)
	{
		printf("\nwhich node you want to delete: ");
		scanf("%d", &num);
		printf("\n");
		Delete=START;
	
		if(num<=n)
		{
			if (num==1)
			{
				Delete=START;
				START = Delete->link;
				
			}
			else
			{
				while(Delete->link!= NULL)
				{
					hold=Delete;
					Delete=Delete->link;
					size++;
					if(size==num)
					break;
					
				}
				hold->link= Delete->link;
			}
			n--;
		}
		else
		{
			printf("\n%d is out of range of linked list node\n",num);
			
		}
	}


	
}
display()
{
	struct node *tmp;
	int i=1;
	printf("\n");
	if(START==NULL)
	{
		printf("\nlist is empty\n");
		
	}
	else
	{
		tmp = START ;
		while(tmp!= NULL)
		{
			printf("%d.node =  %d\n",i,  tmp->info);
			tmp= tmp->link;
			i++;
		}
	}

}

main()
{
	int num;
	
	printf("enter size of node: ");
	scanf("%d",&n);
	num=n;
	while(num!=0)
	{
		insert_node();
		num--;
	}
	
	while(1)
	{
		display();
		if(START==NULL)
		break;
		deleteNode();   
	}

}







