#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int info;
	struct node *link;
	
};
struct node *start = NULL;
struct node * create_node()
{
	struct node *n;
    n= (struct node*) malloc(sizeof (struct node));
    return (n);
 } 
 insert_node()
 {
 	struct node *temp, *t;
 	temp =create_node();
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
 struct node * reverse_node(struct node* r)
 {
 		struct node *tem;
	 	if (r->link== NULL)
	  	{
	 		return(r->info);
	 		
		}
		else
		{
		 	
		 	tem = r;
		 	r= r->link;
		 	printf("%d ",reverse_node(r)); // recursion 
		 	return(tem->info);
		}
		 
		 
   
 }
 main()
 {
 	int n;
 	struct node *rev;
 	printf ("enter size of array: ");
 	scanf("%d",&n );
	while (n!=0)
	{
		insert_node();
		n--;
	}
	if (start ==NULL)
	printf("empty");
	rev = start;
	if(rev==NULL)
	printf("\nempty\n");
	else
	{
		printf("\nreverse: \n");
		printf("%d",reverse_node( rev));
	}
	
	
 	
 }
 
 
 
