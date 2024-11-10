#include<stdio.h>
//#include<conio.h>
#include<process.h>
//#include <graphics.h>
struct Product
  {
       int pid;         //Product ID
       char pname[30];  //Product Name
       int qty;        //Poduct Qty
       double  price;	//Product Price
		double  Total;
  };
   
       double SubTotal;
       
       
       

  
// driver code

       
       
       
       
       
       
    
insertRecord(){
	FILE *fp;
	char ch;

	struct Product Item;
	system("cls");
	fp=fopen("Stock.dat","wb");
	if(fp==NULL)
    {
		 printf("\nFile Not Exists....");
		 exit(0);
    }
	    
     do
    {

	    printf("\nPID\t\tNAME\t\tQTY\t\tPrice\n");
	    printf("*****************\n");
	    scanf("%d\t\t%s\t\t%d\t\t%lf",&Item.pid,Item.pname,&Item.qty,&Item.price);
	    Item.Total=Item.qty *Item.price;
	    fwrite(&Item,sizeof(Item),1,fp);//To Write Structure into File in Secondary
	    printf("\nDo You Want to Add New Record[y/Y]:");ch=getche();
    } while(ch=='y'||ch=='Y');
    
       printf("\nData Saved Sucessfully....");
       fclose(fp);
}
dspRecord()
{
	FILE *fp;
	char ch;

	struct Product Item;
	
	fp=fopen("Stock.dat","rb");
	system("cls");
    printf("\nPID\t\tNAME\t\tQTY\t\tPrice\t\tTotal\n");
   	while(fread(&Item, sizeof(Item),1,fp)>0)
	{
		
		printf("%d\t\t%s\t\t%d\t\t%lf\t\t%lf\n",Item.pid,Item.pname,Item.qty,Item.price,Item.Total);
			
	}
	fclose(fp);
		
}
void red () {
  printf("\033[1;31m");
}
int main()
{
//	clrscr();
	FILE *fp;
	char ch;
	int choice;
	struct Product Item;
	
	do{
		system("cls");
		red ();
	
		printf("\n\t\t     Daily Expenses System");
		printf("\n\t\t****_______________________*****\n");
		printf("\n\t\t\t[1]. add record");
		printf("\n\t\t\t[2]. display all");
		printf("\n\t\t\t[3]. search ");
		printf("\n\t\t\t[4]. edit");
		printf("\n\t\t\t[5]. delete");
		printf("\n\t\t\t[0]. exit");
		printf("\n\t\tEnter option: ");
		scanf("%d",&choice);
		 switch(choice)
		    {
			 case 1:
			 	insertRecord();
			 	break;
			 case 2:
			 	dspRecord();
			 	break;
			 case 3:
			 break;
			 case 4:
			 break;
			 case 5:
			 break;
			 case 0:
			 exit(0);
			 break;
			 default:
			 break;
		    }
		    printf("\nDo You Want to do more operation [y/Y]:");ch=getche();
    } while(ch=='y'||ch=='Y');
	
	   
		
//	       getch();
		
	       
}











	       
	       
	       
	       
	       
	       
	       
	       
	       
	       
