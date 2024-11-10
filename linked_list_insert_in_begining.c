#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int info;
	struct node *link ;
	
};
struct node* start = NULL;
struct node * create_node()
{
	struct node *n;
    n= (struct node*) malloc(sizeof (struct node));
    return (n);
 } 
 insert_node()
 {
 	struct node *temp, *t;
 	temp = create_node();
 	printf("enter a number: ");
 	scanf("%d", &temp->info);
 	temp->link = NULL;
 	if (start == NULL )
 	{
 		start = temp;
 		
	}
	 else
	 {
	 	t = start;
	 	while (t->link!=NULL)
	 	{
	 		t= t->link;	 	
		}
		t->link = temp;
	 }
 	
 }
insert_new_node()
{
	struct node *insert , *temp;
	printf("\nenter a number to insert in list: ");
	insert = create_node();
	scanf("%d", &insert->info);
	
	insert->link = NULL;
		
	if(start== NULL)
	{
		printf("list is empty");
	}
	else
	{
	
		temp=start;
		start = insert;
		start->link =temp;	
	}
}
display()
{
	struct node *tmp;
	if(start==NULL)
	{
		printf("\nllist is empty\n");
	}
	else
	{
		tmp = start ;
		while(tmp!= NULL)
		{
			printf("%d ", tmp->info);
			tmp= tmp->link;
		}
	}

}
main()
{
	int num, i=1;
	printf("enter size of node: ");
	scanf("%d", &num);
	while(num!=0){
			insert_node( );
			num--;		
	}
  
	display();
	insert_new_node();
//	if(start ==NULL)

	display();
	
}



