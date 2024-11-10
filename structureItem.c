#include<stdio.h>
struct ItemDetails
{
	int ItNo;
	char ItName[20];
	int price ;
	int Qty ;
	int total;
};
main()
{
	int num,  i, total=0 ;
	struct ItemDetails Item[10];
	printf("\n\t\t***WELCOME TO DAILY EXPENSES SYSTEM***\n");
				// Input
	printf("\n\tHow many items you want please enter: ");
	scanf("%d",&num);
	printf("\tEnter Item's detials\n");
	printf("\tItNo\tItName\tPrice\tQuantity\n");
	for(i =0  ; i<num ; i++)
	{
		Item[i].ItNo = i+1;
		printf("\t%d\t",i+1);
		scanf("%s\t%d\t%d",&Item[i].ItName,  &Item[i].price,  &Item[i].Qty);
	}
//	system("cls");
//	printf("\n\t\t***WELCOME TO DAILY EXPENSES SYSTEM***\n\n");
		//	Display
	printf("\n");
	for(i=1; i<56; i++)
		printf("%c",240);
		
	printf("\n\tItNo\tItName\tPrice\tQuantity\ttotal\n\n");
	for(i =0  ; i<num ; i++)
	{
		printf("\t");
		Item[i].total = Item[i].price * Item[i].Qty;
		total = total + Item[i].total;
		printf("%d\t%s\t%d\t%d\t\t%d\t\n",Item[i].ItNo, Item[i].ItName, Item[i].price, Item[i].Qty, Item[i].total);	
	}
	printf("_______________________________________________________");
	printf("\n\t\t\t\t\t Total: %d\n\n",total);

	for(i=1; i<56; i++)
		printf("%c",240);

	
}







