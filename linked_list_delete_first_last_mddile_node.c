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
insert_new_node()
{

	struct node  *temp, *t;
	int num, i=0 , j=1;	
	if(start== NULL)
	{
		printf("list is empty");
	}
	else
	
	{
			printf("\nfrom which place you want to delete node\n");
		    printf("\n1. first node\n2. mddile node\n3. end node\n");
		    printf("\n enter your choice: ");
		    scanf("%d", &num);
		    switch(num)
		    {
		    	case 1:
		    		temp=start;
	               	start = temp->link;
					printf("\nafter deleted first node: ");

					break;
		    	case 2: 
		    	    temp = start ;
		    		while(temp->link !=NULL)
		    		{
		    			temp = temp->link;
		    			i++;
					}
					temp=start;
					while(j<=i/2)
					{
						t = temp;
						temp = temp->link;
						j++;
					}
					t->link = temp->link ;
					printf("\nafter deleted middile node: ");

					break;
				case 3:
					temp = start ;
		    		while(temp->link !=NULL)
		    		{
		    			t= temp;
		    			temp = temp->link;
					}
					t->link = NULL;
					printf("\nafter deleted last node: ");
				    break;
				  default :
				     printf("\ninvilid choice");  	
			}
	

	}
}
display()
{
	struct node *tmp;
	int num;
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
		insert_node();
		num--;		
	}

	display();
	insert_new_node();
	display();
	
}



