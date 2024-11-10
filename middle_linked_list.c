#include<stdio.h>
struct node
{
	int info;
	struct node *link;
	
};
struct node *START= NULL;
struct node* createnode(int num)
{	
	struct node *n;
	n= (struct node* )malloc(num * sizeof(struct node ));
	return(n);
	
}
void printMiddle()
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
	printf("middle linked list is %d",(temp+(num/2))->info);
	
	 



	
}

main()
{
	printMiddle();
}
