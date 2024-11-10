#include<stdio.h>
struct node
{
    int data;
    struct node * right;
    struct node * left;

};
struct node* creatNode()
{
    struct node * temp;
    temp = (struct node*) malloc(sizeof(struct node));
    return(temp);
    
}
struct node *root =NULL;
insertNode()
{
    struct node* temp1,* temp2 ;
    temp1 = creatNode();
    printf("enter a number to store in tree: ");
    scanf("%d",&temp1->data);
    temp1->left = temp1->right = NULL;
    if (root == NULL)
    root= temp1;
    else
    {
        temp2 =root;
        while(1)
        {
            if(temp2->data < temp1->data)
            {
                if(temp2->right == NULL)
                {
                    temp2->right = temp1;
                    break;
                }
                else
                {
                    temp2= temp2->right;
                }  
            }
            else if(temp2->data > temp1->data)
            {
                if(temp2->left == NULL)
                {
                    temp2->left  = temp1;
                    break;
                }
                else
                {
                    temp2= temp2->left;
                }
            }
        } 
        
    } 
    

}
preOrder(struct node * root2)
{
    if(root2)
    {
        printf("%d ",root2->data);
        preOrder(root2->left);
        preOrder(root2->right);

    }

}
struct node * findElement(struct node * root2 , int Data)
{
    if (root2 == NULL)
        return(NULL);
    if(Data <root2->data)
        return(findElement(root2->left ,Data));
    if(Data >root2->data)
        return(findElement(root2->right ,Data));
    return(root2);    
}
main()
{
    int i=10, Data ; 
    struct node *hold;
    while(i!=0)
    {
         insertNode() ;
         i--;
    }
    printf("\nAfter pre order traversal \n");
    preOrder(root);
    l1:
    printf("\n\nEnter a number to find in tree: ");
    scanf("%d",&Data);
    hold = findElement(root , Data);
    if(hold)
    {
        printf("\ndata found : %d ", hold->data);
    }
    else
    {
        printf("\nData not fount in tree");
    }
    
    goto l1;

    
}
