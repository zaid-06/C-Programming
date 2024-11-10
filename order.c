#include<stdio.h>
#include<string.h>

struct address
{
	char name[20];
	char  place[30];
	int house_no ;
	char   mobile_no[10];
	
	
};

struct address address_fun()
{
	struct address adrs ;
	printf("enter your name: ");
	gets(adrs.name);
	printf("enter place: ");
	gets(adrs.place);
	printf("house number: ");
	scanf("%d",&adrs.house_no);
	printf("mobile number: ");
	
	scanf("%s",&adrs.mobile_no);
	return (adrs);
	
}

main()
{

	struct address a;
	
	char m[5]={"meals"}, f[9]={"fast food"}, d[5]={"drink"}, b[9]={"breakfast"}, c[9]={"chocolate"}   ;
	char search[30], *p;
	char order, buy_or_not, other_things ;
	int i, L, store, count, quantity, price=0;  
	int M=0, F=0, D=0, B=0, C=0;
	 l1:
	 		price = 0;
//			*p = 0;
	 		M=0	,F=0,D=0,	B=0,C=0;
		
				
			
				
		printf("MEALS		FAST FOOD		DRINK		BREAKFAST		CHOCOLATE\n");
	
		gets(search);
		L=strlen(search);
		
			
			for(i=0; i<L; i++)
			{
				if(search[i]==m[i] || search[0]=='M' )
				M++;
				
				if(search[i]==f[i] || search[0]=='F')
				F++;
				if(search[i]==d[i] || search[0]=='D') 
				D++;
				if( search[i]==b[i] || search[0]=='B')
				B++;
				if( search[i]==c[i] || search[0]=='C')
				C++;
				
			}
			do
			{
				  	
				count=0;
				if(L==M)
				{
				    system("cls");
				    printf("MEALS		FAST FOOD		DRINK		BREAKFAST		CHOCOLATE\n");
					printf("\nchicken biryani\n\ndal chaval\n\nbiryani\n\nbread/chapati\n\nbread chicken\n");
					
				}
				if(L==F)
				{
					 system("cls");
				    printf("MEALS		FAST FOOD		DRINK		BREAKFAST		CHOCOLATE\n");
					printf("\n\n		Dahi wada\n\n		Burger\n\n		pizza\n\n		Sandwiches\n\n		French\n");
				}
				if(L==D)
				{
				     system("cls");
				    printf("MEALS		FAST FOOD		DRINK		BREAKFAST		CHOCOLATE\n");
					printf("\n					coffee\n\n					chai\n\n					Sprite\n");	
					printf("\n					Thums Up\n					Pepsi\n\n					Fanta");					
					printf("\n					Coca Cola\n\n					Limca\n\n					Mirinda\n\n					7 Up\n");
	
				}
				if(L==B)
				{	
					system("cls");
				    printf("MEALS		FAST FOOD		DRINK		BREAKFAST		CHOCOLATE\n");
					printf("\n\n							not available\n");
				}
				if(L==C)
				{
					system("cls");
				   printf("MEALS		FAST FOOD		DRINK		BREAKFAST		CHOCOLATE\n");
					printf("\n\n										Dairy Milk\n\n										KitKat\n\n");
					printf("										Amul Chocolate");
					printf("\n\n										Parle Friberg\n\n										Amul Dark Chocolate\n");
					
				}
				M=0;
				F=0;
				D=0;
				B=0;
				C=0;
				gets(search);
				L=strlen(search);
				for(i=0; i<L; i++)
				{
					if(search[i]==m[i] || search[0]=='M' )
					M++;
					
					if(search[i]==f[i] || search[0]=='F')
					F++;
					if(search[i]==d[i] || search[0]=='D') 
					D++;
					if( search[i]==b[i] || search[0]=='B')
					B++;
					if( search[i]==c[i] || search[0]=='C')
					C++;
					
				}
			
				if(L==M || L==F || L==D || L==B || L==C)
				{
					count=1;
				}
		
			}	while(count);
		p=search;
			
		for(i=0 ; i<L; i++)		
	    if(*(p+i) == 'p' || *(p+i) == 'i'||*(p+i)== 'z'||*(p+i) == 'z'||*(p+i) == 'a')
	    ;
		else
		break;
		if(i=L)
		{
			printf("\nprice: 50");
			price=50;
		}
		
		for(i=0 ; i<L; i++)	
			if(search[i] == 'b' || search[i] == 'u'||search[i] == 'r'||search[i] == 'g'||search[i] == 'e'||search[i] == 'r' )
		    ;
			else
			break;
			if(i==L)
			{
				printf("\nprice: 20 ");
				price=20;
				
			}
					
		for(i=0 ; i<L; i++)	
			if(search[i] == 'd' ||search[0] == 'D'|| search[i] == 'a'||search[i] == 'h'||search[i] == 'i'||search[i] == ' '||search[i] == 'w'||search[i] == 'a'||search[i] == 'd' ||search[i] == 'a')
		    ;
			else
			break;
			if(i==L){
				printf("\nprice: 30 ");
				price=30;
			}
				
		for(i=0 ; i<L; i++)	
			if(search[i] == 'F' ||search[0] == 'f'|| search[i] == 'r'||search[i] == 'e'||search[i] == 'n'||search[i] == 'c'||search[i] == 'h' )
		    ;
			else
			break;
			if(i==L){
				printf("\nprice: 40 ");
				price=40;
			}
			
		for(i=0 ; i<L; i++)	
			if(search[i] == 'B' ||search[0] == 'b'|| search[i] == 'i'||search[i] == 'r'||search[i] == 'y'||search[i] == 'n'||search[i] == 'i' )
		    ;
			else
			break;
			if(i==L)
			{
				printf("\nprice: 80 ");
				price=80;
			}
					
			for(i=0 ; i<L; i++)	
			if(search[i] == 'c' ||search[0] == 'C'|| search[i] == 'h'||search[i] == 'i'||search[i] == 'c'||search[i] == 'k'||search[i] == 'e'||search[0] == 'n'|| search[i] == ' '||search[i] == 'b'||search[i] == 'i'||search[i] == 'r'||search[i] == 'y'||search[i] == 'a'||search[i] == 'n'||search[i] == 'i' )
		    ;
			else
			break;
			if(i==L)
			{
				printf("\nprice: 100 ");
				price=100;
					
			}
			
			for(i=0 ; i<L; i++)	
			if(search[i] == 'B' ||search[0] == 'b'|| search[i] == 'r'||search[i] == 'e'||search[i] == 'a'||search[i] == 'd' )
		    ;
			else
			break;
			if(i==L){
				printf("\nprice: \n1 pcs: 6 ");	
				price=6;
			}
				for(i=0 ; i<L; i++)	
			if(search[i] == 'd' ||search[0] == 'D'|| search[i] == 'a'||search[i] == 'i'||search[i] == 'r'||search[i] == 'y' || search[i] == ' '||search[i] == 'm'||search[i] == 'i'||search[i] == 'l'||search[i] == 'k')
		    ;
			else
			break;
			if(i==L){
				printf("\nprice: 10");	
				price=10;
			}
					
		
		printf("\n\norder now");
		
		printf("\ndo you want to order [y/n]");
		order=getche();
		system("cls");
		if(order== 'y' || order == 'Y')
		{
			
			printf("\nenter new address\n\n");
			a=address_fun();
			printf("\n\nyour order: %s\n",search);
			printf("please enter your quantity :");
			scanf("%d",&quantity);
			
			printf("your total price: %d",quantity*price);
			printf("\n\ndo you want to confirm [ y/n ]");
			buy_or_not=getche();
			if(buy_or_not== 'y' ||buy_or_not== 'Y' )
			{
				system("cls");
				
				printf("\n\nyour order is cofirmed ");
				printf("\n\norder: %s",search);
				printf("\n\nquantity: %d",quantity );
				printf("\n\ntotal charges: %d",quantity*price);
				printf("\n\naddress: ");
				printf("\nname: %s\nplace: %s\nhouse number: %d\nmobile number: %s\n",a.name, a.place,a.house_no, a.mobile_no);		
			} 
		}
		
		printf("\n\n do you want to buy other things [ y/n ]");
		other_things=getche();
		if(other_things == 'y' || other_things=='Y' )
		{
			system("cls");
			goto l1;
		}

		
	
	
	
	

}
      
